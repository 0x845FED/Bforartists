# ##### BEGIN GPL LICENSE BLOCK #####
#
#  This program is free software; you can redistribute it and/or
#  modify it under the terms of the GNU General Public License
#  as published by the Free Software Foundation; either version 2
#  of the License, or (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software Foundation,
#  Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
#
# ##### END GPL LICENSE BLOCK #####

# <pep8 compliant>

import bpy
from bpy.types import Panel
import math

from bl_ui.properties_paint_common import (
    UnifiedPaintPanel,
    brush_texture_settings,
    brush_basic_texpaint_settings,
    brush_settings,
    brush_settings_advanced,
    draw_color_settings,
    ClonePanel,
    BrushSelectPanel,
    TextureMaskPanel,
    ColorPalettePanel,
    StrokePanel,
    SmoothStrokePanel,
    FalloffPanel,
    DisplayPanel,
)
from bl_ui.properties_grease_pencil_common import (
    AnnotationDataPanel,
)
from bl_ui.space_toolsystem_common import (
    ToolActivePanelHelper,
)

from bpy.app.translations import pgettext_iface as iface_


class toolshelf_calculate( Panel):

    @staticmethod
    def ts_width(layout, region, scale_y):

        # Currently this just checks the width,
        # we could have different layouts as preferences too.
        system = bpy.context.preferences.system
        view2d = region.view2d
        view2d_scale = (
            view2d.region_to_view(1.0, 0.0)[0] -
            view2d.region_to_view(0.0, 0.0)[0]
        )
        width_scale = region.width * view2d_scale / system.ui_scale

        # how many rows. 4 is text buttons.

        if width_scale > 160.0:
            column_count = 4
        elif width_scale > 120.0:
            column_count = 3
        elif width_scale > 80:
            column_count = 2
        else:
            column_count = 1

        return column_count


class IMAGE_PT_uvtab_transform(toolshelf_calculate, Panel):
    bl_label = "Transform"
    bl_space_type = 'IMAGE_EDITOR'
    bl_region_type = 'TOOLS'
    bl_category = "UV"
    bl_options = {'HIDE_BG', 'DEFAULT_CLOSED'}

     # just show when the toolshelf tabs toggle in the view menu is on.
    @classmethod
    def poll(cls, context):
        preferences = context.preferences
        addon_prefs = preferences.addons["bforartists_toolbar_settings"].preferences

        view = context.space_data
        sima = context.space_data
        show_uvedit = sima.show_uvedit
        #overlay = view.overlay
        #return overlay.show_toolshelf_tabs == True and sima.mode == 'UV'
        return addon_prefs.uv_show_toolshelf_tabs and show_uvedit == True and sima.mode == 'UV'

    def draw(self, context):
        layout = self.layout

        column_count = self.ts_width(layout, context.region, scale_y= 1.75)

        obj = context.object

        #text buttons
        if column_count == 4:

            col = layout.column(align=True)
            col.scale_y = 2

            col.operator_context = 'EXEC_REGION_WIN'
            col.operator("transform.rotate", text="Rotate +90°", icon = "ROTATE_PLUS_90").value = math.pi / 2
            col.operator("transform.rotate", text="Rotate  - 90°", icon = "ROTATE_MINUS_90").value = math.pi / -2
            col.operator_context = 'INVOKE_DEFAULT'

            col.separator()

            col.operator("transform.shear", icon = 'SHEAR')

        # icon buttons
        else:

            col = layout.column(align=True)
            col.scale_x = 2
            col.scale_y = 2

            if column_count == 3:

                row = col.row(align=True)
                row.operator("transform.rotate", text="", icon = "ROTATE_PLUS_90").value = math.pi / 2
                row.operator("transform.rotate", text="", icon = "ROTATE_MINUS_90").value = math.pi / -2
                row.operator("transform.shear", text="", icon = 'SHEAR')

            elif column_count == 2:

                row = col.row(align=True)
                row.operator("transform.rotate", text="", icon = "ROTATE_PLUS_90").value = math.pi / 2
                row.operator("transform.rotate", text="", icon = "ROTATE_MINUS_90").value = math.pi / -2

                row = col.row(align=True)
                row.operator("transform.shear", text="", icon = 'SHEAR')

            elif column_count == 1:

                col.operator_context = 'EXEC_REGION_WIN'
                col.operator("transform.rotate", text="Rotate +90°", icon = "ROTATE_PLUS_90").value = math.pi / 2
                col.operator("transform.rotate", text="Rotate  - 90°", icon = "ROTATE_MINUS_90").value = math.pi / -2
                col.operator_context = 'INVOKE_DEFAULT'

                col.separator()

                col.operator("transform.shear", icon = 'SHEAR')


class IMAGE_PT_uvtab_mirror(toolshelf_calculate, Panel):
    bl_label = "Mirror"
    bl_space_type = 'IMAGE_EDITOR'
    bl_region_type = 'TOOLS'
    bl_category = "UV"
    bl_options = {'HIDE_BG', 'DEFAULT_CLOSED'}

     # just show when the toolshelf tabs toggle in the view menu is on.
    @classmethod
    def poll(cls, context):
        preferences = context.preferences
        addon_prefs = preferences.addons["bforartists_toolbar_settings"].preferences

        view = context.space_data
        sima = context.space_data
        show_uvedit = sima.show_uvedit
        #overlay = view.overlay
        #return overlay.show_toolshelf_tabs == True and sima.mode == 'UV'
        return addon_prefs.uv_show_toolshelf_tabs and show_uvedit == True and sima.mode == 'UV'

    def draw(self, context):
        layout = self.layout

        column_count = self.ts_width(layout, context.region, scale_y= 1.75)

        obj = context.object

        #text buttons
        if column_count == 4:

            col = layout.column(align=True)
            col.scale_y = 2

            col.operator("mesh.faces_mirror_uv", icon = "COPYMIRRORED")

            col.operator_context = 'EXEC_REGION_WIN'
            col.operator("transform.mirror", text="X Axis", icon = "MIRROR_X").constraint_axis[0] = True
            col.operator("transform.mirror", text="Y Axis", icon = "MIRROR_Y").constraint_axis[1] = True

        # icon buttons
        else:

            col = layout.column(align=True)
            col.scale_x = 2
            col.scale_y = 2

            if column_count == 3:

                row = col.row(align=True)
                row.operator("mesh.faces_mirror_uv", text="", icon = "COPYMIRRORED")
                row.operator_context = 'EXEC_REGION_WIN'
                row.operator("transform.mirror", text="", icon = "MIRROR_X").constraint_axis[0] = True
                row.operator("transform.mirror", text="", icon = "MIRROR_Y").constraint_axis[1] = True

            elif column_count == 2:

                row = col.row(align=True)
                row.operator("mesh.faces_mirror_uv", text="", icon = "COPYMIRRORED")

                row = col.row(align=True)
                row.operator_context = 'EXEC_REGION_WIN'
                row.operator("transform.mirror", text="", icon = "MIRROR_X").constraint_axis[0] = True
                row.operator("transform.mirror", text="", icon = "MIRROR_Y").constraint_axis[1] = True

            elif column_count == 1:

                col.operator("mesh.faces_mirror_uv", text="", icon = "COPYMIRRORED")

                col.operator_context = 'EXEC_REGION_WIN'
                col.operator("transform.mirror", text="", icon = "MIRROR_X").constraint_axis[0] = True
                col.operator("transform.mirror", text="", icon = "MIRROR_Y").constraint_axis[1] = True


class IMAGE_PT_uvtab_snap(toolshelf_calculate, Panel):
    bl_label = "Snap"
    bl_space_type = 'IMAGE_EDITOR'
    bl_region_type = 'TOOLS'
    bl_category = "UV"
    bl_options = {'HIDE_BG', 'DEFAULT_CLOSED'}

     # just show when the toolshelf tabs toggle in the view menu is on.
    @classmethod
    def poll(cls, context):
        preferences = context.preferences
        addon_prefs = preferences.addons["bforartists_toolbar_settings"].preferences

        view = context.space_data
        sima = context.space_data
        show_uvedit = sima.show_uvedit
        #overlay = view.overlay
        #return overlay.show_toolshelf_tabs == True and sima.mode == 'UV'
        return addon_prefs.uv_show_toolshelf_tabs and show_uvedit == True and sima.mode == 'UV'

    def draw(self, context):
        layout = self.layout

        column_count = self.ts_width(layout, context.region, scale_y= 1.75)

        obj = context.object

        #text buttons
        if column_count == 4:

            col = layout.column(align=True)
            col.scale_y = 2

            col.operator_context = 'EXEC_REGION_WIN'
            col.operator("uv.snap_selected", text="Selected to Pixels", icon = "SNAP_TO_PIXELS").target = 'PIXELS'
            col.operator("uv.snap_selected", text="Selected to Cursor", icon = "SELECTIONTOCURSOR").target = 'CURSOR'
            col.operator("uv.snap_selected", text="Selected to Cursor (Offset)", icon = "SELECTIONTOCURSOROFFSET").target = 'CURSOR_OFFSET'
            col.operator("uv.snap_selected", text="Selected to Adjacent Unselected", icon = "SNAP_TO_ADJACENT").target = 'ADJACENT_UNSELECTED'

            col.separator()

            col.operator("uv.snap_cursor", text="Cursor to Pixels", icon = "CURSOR_TO_PIXELS").target = 'PIXELS'
            col.operator("uv.snap_cursor", text="Cursor to Selected", icon = "CURSORTOSELECTION").target = 'SELECTED'

        # icon buttons
        else:

            col = layout.column(align=True)
            col.scale_x = 2
            col.scale_y = 2

            if column_count == 3:

                row = col.row(align=True)
                row.operator_context = 'EXEC_REGION_WIN'
                row.operator("uv.snap_selected", text="", icon = "SNAP_TO_PIXELS").target = 'PIXELS'
                row.operator("uv.snap_selected", text="", icon = "SELECTIONTOCURSOR").target = 'CURSOR'
                row.operator("uv.snap_selected", text="", icon = "SELECTIONTOCURSOROFFSET").target = 'CURSOR_OFFSET'

                row = col.row(align=True)
                row.operator("uv.snap_selected", text="", icon = "SNAP_TO_ADJACENT").target = 'ADJACENT_UNSELECTED'
                row.operator("uv.snap_cursor", text="", icon = "CURSOR_TO_PIXELS").target = 'PIXELS'
                row.operator("uv.snap_cursor", text="", icon = "CURSORTOSELECTION").target = 'SELECTED'

            elif column_count == 2:

                row = col.row(align=True)
                row.operator_context = 'EXEC_REGION_WIN'
                row.operator("uv.snap_selected", text="", icon = "SNAP_TO_PIXELS").target = 'PIXELS'
                row.operator("uv.snap_selected", text="", icon = "SELECTIONTOCURSOR").target = 'CURSOR'

                row = col.row(align=True)
                row.operator("uv.snap_selected", text="", icon = "SELECTIONTOCURSOROFFSET").target = 'CURSOR_OFFSET'
                row.operator("uv.snap_selected", text="", icon = "SNAP_TO_ADJACENT").target = 'ADJACENT_UNSELECTED'

                row = col.row(align=True)
                row.operator("uv.snap_cursor", text="", icon = "CURSOR_TO_PIXELS").target = 'PIXELS'
                row.operator("uv.snap_cursor", text="", icon = "CURSORTOSELECTION").target = 'SELECTED'

            elif column_count == 1:

                col.operator_context = 'EXEC_REGION_WIN'
                col.operator("uv.snap_selected", text="", icon = "SNAP_TO_PIXELS").target = 'PIXELS'
                col.operator("uv.snap_selected", text="", icon = "SELECTIONTOCURSOR").target = 'CURSOR'
                col.operator("uv.snap_selected", text="", icon = "SELECTIONTOCURSOROFFSET").target = 'CURSOR_OFFSET'
                col.operator("uv.snap_selected", text="", icon = "SNAP_TO_ADJACENT").target = 'ADJACENT_UNSELECTED'

                col.separator()

                col.operator("uv.snap_cursor", text="", icon = "CURSOR_TO_PIXELS").target = 'PIXELS'
                col.operator("uv.snap_cursor", text="", icon = "CURSORTOSELECTION").target = 'SELECTED'

classes = (

    IMAGE_PT_uvtab_transform,
    IMAGE_PT_uvtab_mirror,
    IMAGE_PT_uvtab_snap,
)

if __name__ == "__main__":  # only for live edit.
    from bpy.utils import register_class
    for cls in classes:
        register_class(cls)
