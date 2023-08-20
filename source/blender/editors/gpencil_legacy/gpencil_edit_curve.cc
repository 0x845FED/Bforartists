/* SPDX-FileCopyrightText: 2008 Blender Authors
 *
 * SPDX-License-Identifier: GPL-2.0-or-later */

/** \file
 * \ingroup edgpencil
 * Operators for editing Grease Pencil strokes.
 */

#include <cmath>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "DNA_gpencil_legacy_types.h"
#include "DNA_view3d_types.h"

#include "BKE_context.h"
#include "BKE_gpencil_curve_legacy.h"
#include "BKE_gpencil_geom_legacy.h"
#include "BKE_gpencil_legacy.h"

#include "BLI_listbase.h"
#include "BLI_math_matrix.h"
#include "BLI_math_vector.h"

#include "RNA_access.hh"
#include "RNA_define.hh"

#include "WM_api.hh"
#include "WM_types.hh"

#include "ED_gpencil_legacy.hh"

#include "DEG_depsgraph.h"

#include "gpencil_intern.h"

#include "UI_interface.hh" /*bfa - for the icons*/
#include "UI_resources.hh" /*bfa - for the icons*/

/* -------------------------------------------------------------------- */
/** \name Enter Edit-Mode
 * \{ */

/* Poll callback for checking if there is an active layer and we are in curve edit mode. */
static bool gpencil_curve_edit_mode_poll(bContext *C)
{
  Object *ob = CTX_data_active_object(C);
  if ((ob == nullptr) || (ob->type != OB_GPENCIL_LEGACY)) {
    return false;
  }
  bGPdata *gpd = (bGPdata *)ob->data;
  if (!GPENCIL_CURVE_EDIT_SESSIONS_ON(gpd)) {
    return false;
  }

  bGPDlayer *gpl = BKE_gpencil_layer_active_get(gpd);
  return (gpl != nullptr);
}

static int gpencil_stroke_enter_editcurve_mode_exec(bContext *C, wmOperator *op)
{
  Object *ob = CTX_data_active_object(C);
  bGPdata *gpd = static_cast<bGPdata *>(ob->data);

  float error_threshold = RNA_float_get(op->ptr, "error_threshold");
  gpd->curve_edit_threshold = error_threshold;

  if (ELEM(nullptr, gpd)) {
    return OPERATOR_CANCELLED;
  }

  LISTBASE_FOREACH (bGPDlayer *, gpl, &gpd->layers) {
    LISTBASE_FOREACH (bGPDframe *, gpf, &gpl->frames) {
      if (gpf == gpl->actframe) {
        LISTBASE_FOREACH (bGPDstroke *, gps, &gpf->strokes) {
          /* only allow selected and non-converted strokes to be transformed */
          if ((gps->flag & GP_STROKE_SELECT && gps->editcurve == nullptr) ||
              (gps->editcurve != nullptr && gps->editcurve->flag & GP_CURVE_NEEDS_STROKE_UPDATE))
          {
            BKE_gpencil_stroke_editcurve_update(gpd, gpl, gps);
            /* Update the selection from the stroke to the curve. */
            BKE_gpencil_editcurve_stroke_sync_selection(gpd, gps, gps->editcurve);
            gps->flag |= GP_STROKE_NEEDS_CURVE_UPDATE;
            BKE_gpencil_stroke_geometry_update(gpd, gps);
          }
        }
      }
    }
  }

  gpd->flag |= GP_DATA_CURVE_EDIT_MODE;

  /* notifiers */
  DEG_id_tag_update(&gpd->id, ID_RECALC_TRANSFORM | ID_RECALC_GEOMETRY);
  WM_event_add_notifier(C, NC_GPENCIL | ND_DATA | NA_EDITED, nullptr);

  return OPERATOR_FINISHED;
}

void GPENCIL_OT_stroke_enter_editcurve_mode(wmOperatorType *ot)
{
  PropertyRNA *prop;

  /* identifiers */
  ot->name = "Enter curve edit mode";
  ot->idname = "GPENCIL_OT_stroke_enter_editcurve_mode";
  ot->description = "Called to transform a stroke into a curve";

  /* api callbacks */
  ot->exec = gpencil_stroke_enter_editcurve_mode_exec;
  ot->poll = gpencil_active_layer_poll;

  /* flags */
  ot->flag = OPTYPE_REGISTER | OPTYPE_UNDO;

  /* properties */
  prop = RNA_def_float(ot->srna,
                       "error_threshold",
                       0.1f,
                       FLT_MIN,
                       100.0f,
                       "Error Threshold",
                       "Threshold on the maximum deviation from the actual stroke",
                       FLT_MIN,
                       10.0f);
  RNA_def_property_ui_range(prop, FLT_MIN, 10.0f, 0.1f, 5);
}

/** \} */

/* -------------------------------------------------------------------- */
/** \name Set Handle Type
 * \{ */

static int gpencil_editcurve_set_handle_type_exec(bContext *C, wmOperator *op)
{
  Object *ob = CTX_data_active_object(C);
  bGPdata *gpd = static_cast<bGPdata *>(ob->data);
  const int handle_type = RNA_enum_get(op->ptr, "type");

  if (ELEM(nullptr, gpd)) {
    return OPERATOR_CANCELLED;
  }

  GP_EDITABLE_CURVES_BEGIN(gps_iter, C, gpl, gps, gpc)
  {
    for (int i = 0; i < gpc->tot_curve_points; i++) {
      bGPDcurve_point *gpc_pt = &gpc->curve_points[i];

      if (gpc_pt->flag & GP_CURVE_POINT_SELECT) {
        BezTriple *bezt = &gpc_pt->bezt;

        if (bezt->f2 & SELECT) {
          bezt->h1 = handle_type;
          bezt->h2 = handle_type;
        }
        else {
          if (bezt->f1 & SELECT) {
            bezt->h1 = handle_type;
          }
          if (bezt->f3 & SELECT) {
            bezt->h2 = handle_type;
          }
        }
      }
    }

    BKE_gpencil_editcurve_recalculate_handles(gps);
    gps->flag |= GP_STROKE_NEEDS_CURVE_UPDATE;
    BKE_gpencil_stroke_geometry_update(gpd, gps);
  }
  GP_EDITABLE_CURVES_END(gps_iter);

  /* notifiers */
  DEG_id_tag_update(&gpd->id, ID_RECALC_TRANSFORM | ID_RECALC_GEOMETRY);
  WM_event_add_notifier(C, NC_GPENCIL | ND_DATA | NA_EDITED, nullptr);

  return OPERATOR_FINISHED;
}

void GPENCIL_OT_stroke_editcurve_set_handle_type(wmOperatorType *ot)
{
  static const EnumPropertyItem editcurve_handle_type_items[] = {
      {HD_FREE, "FREE", ICON_HANDLE_FREE, "Free", ""},
      {HD_AUTO, "AUTOMATIC", ICON_HANDLE_AUTO, "Automatic", ""},
      {HD_VECT, "VECTOR", ICON_HANDLE_VECTOR, "Vector", ""},
      {HD_ALIGN, "ALIGNED", ICON_HANDLE_ALIGNED, "Aligned", ""},
      {0, nullptr, 0, nullptr, nullptr},
  };

  /* identifiers */
  ot->name = "Set handle type";
  ot->idname = "GPENCIL_OT_stroke_editcurve_set_handle_type";
  ot->description = "Set the type of an edit curve handle";

  /* api callbacks */
  ot->invoke = WM_menu_invoke;
  ot->exec = gpencil_editcurve_set_handle_type_exec;
  ot->poll = gpencil_curve_edit_mode_poll;

  /* flags */
  ot->flag = OPTYPE_REGISTER | OPTYPE_UNDO;

  /* properties */
  ot->prop = RNA_def_enum(ot->srna, "type", editcurve_handle_type_items, 1, "Type", "Spline type");
}

/** \} */
