/* SPDX-License-Identifier: GPL-2.0-or-later */

/**
 * Generated by 'source/tools/utils/blender_theme_as_c.py'
 *
 * Do not hand edit this file!
 */

#include "DNA_userdef_types.h"

#include "BLO_readfile.h"

/* clang-format off */

#ifdef __LITTLE_ENDIAN__
#  define RGBA(c) {((c) >> 24) & 0xff, ((c) >> 16) & 0xff, ((c) >> 8) & 0xff, (c) & 0xff}
#  define RGB(c)  {((c) >> 16) & 0xff, ((c) >> 8) & 0xff, (c) & 0xff}
#else
#  define RGBA(c) {(c) & 0xff, ((c) >> 8) & 0xff, ((c) >> 16) & 0xff, ((c) >> 24) & 0xff}
#  define RGB(c)  {(c) & 0xff, ((c) >> 8) & 0xff, ((c) >> 16) & 0xff}
#endif

const bTheme U_theme_default = {
  .name = "Default",
  .tui = {
    .wcol_regular = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x595959ff),
      .inner_sel = RGBA(0x5680c2ff),
      .item = RGBA(0x191919ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xb3ffb3ff),
      .roundness = 0.2f,
    },
    .wcol_tool = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x595959ff),
      .inner_sel = RGBA(0x5680c2ff),
      .item = RGBA(0x191919ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0x000000ff),
      .shadetop = 15,
      .shadedown = -15,
      .roundness = 0.2f,
    },
    .wcol_toolbar_item = {
      .outline = RGBA(0x373737ff),
      .inner = RGBA(0x585858ff),
      .inner_sel = RGBA(0x5680c2ff),
      .item = RGBA(0xffffffff),
      .text = RGBA(0xffffffff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_text = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x595959ff),
      .inner_sel = RGBA(0x999999ff),
      .item = RGBA(0xe6e6e6ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0x000000ff),
      .shadedown = 25,
      .roundness = 0.2f,
    },
    .wcol_radio = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x595959ff),
      .inner_sel = RGBA(0x5680c2ff),
      .item = RGBA(0xffffffff),
      .text = RGBA(0xffffffff),
      .text_sel = RGBA(0xffffffff),
      .shadetop = 15,
      .shadedown = -15,
      .roundness = 0.2f,
    },
    .wcol_option = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x808080ff),
      .inner_sel = RGBA(0x80e6ffff),
      .item = RGBA(0x000000ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xe6fff2ff),
      .shadetop = 15,
      .shadedown = -15,
      .roundness = 0.2f,
    },
    .wcol_toggle = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x595959ff),
      .inner_sel = RGBA(0x5680c2ff),
      .item = RGBA(0x000000ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xffffffff),
      .shadetop = 15,
      .shadedown = -15,
      .roundness = 0.2f,
    },
    .wcol_num = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x404040ff),
      .inner_sel = RGBA(0x999999ff),
      .item = RGBA(0xe7e7e7ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0x000000ff),
      .shadetop = -20,
      .roundness = 0.2f,
    },
    .wcol_numslider = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x404040ff),
      .inner_sel = RGBA(0x666666ff),
      .item = RGBA(0x5680c2ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xffffffff),
      .shadetop = -20,
      .roundness = 0.2f,
    },
    .wcol_tab = {
      .outline = RGBA(0x2d2d2dff),
      .inner = RGBA(0x323232ff),
      .inner_sel = RGBA(0x4b4b4bff),
      .item = RGBA(0x2d2d2dff),
      .text = RGBA(0xa4a4a4ff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_menu = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x394c66ff),
      .inner_sel = RGBA(0x5680c2ff),
      .item = RGBA(0xffffffff),
      .text = RGBA(0xffffffff),
      .text_sel = RGBA(0x000000ff),
      .shadetop = 15,
      .shadedown = -15,
      .roundness = 0.2f,
    },
    .wcol_pulldown = {
      .outline = RGBA(0x808080ff),
      .inner = RGBA(0x3f3f3fff),
      .inner_sel = RGBA(0x5680c2ff),
      .item = RGBA(0xffffffff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0x000000ff),
      .shadetop = 25,
      .shadedown = -20,
      .roundness = 0.2f,
    },
    .wcol_menu_back = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x191919e6),
      .inner_sel = RGBA(0x2d2d2de6),
      .item = RGBA(0x646464ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xffffffff),
      .shadetop = 25,
      .shadedown = -20,
      .roundness = 0.2f,
    },
    .wcol_menu_item = {
      .outline = RGBA(0x25252500),
      .inner_sel = RGBA(0x5680c2ff),
      .item = RGBA(0xacacac80),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xffffffff),
      .shadetop = 38,
      .roundness = 0.2f,
    },
    .wcol_tooltip = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x191919e6),
      .inner_sel = RGBA(0x2d2d2de6),
      .item = RGBA(0x646464ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xffffffff),
      .shadetop = 25,
      .shadedown = -20,
      .roundness = 0.2f,
    },
    .wcol_box = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x808080ff),
      .inner_sel = RGBA(0x394c66ff),
      .item = RGBA(0xffffffff),
      .text = RGBA(0xffffffff),
      .text_sel = RGBA(0x000000ff),
      .shaded = 1,
      .shadetop = -40,
      .shadedown = -40,
      .roundness = 0.2f,
    },
    .wcol_scroll = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x303030ff),
      .inner_sel = RGBA(0x646464ff),
      .item = RGBA(0x808080ff),
      .text = RGBA(0xffffffff),
      .text_sel = RGBA(0xffffffff),
      .shadetop = 5,
      .shadedown = -5,
      .roundness = 0.5f,
    },
    .wcol_progress = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x4d4d4dff),
      .inner_sel = RGBA(0x646464b4),
      .item = RGBA(0x808080ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xffffffff),
      .shadetop = 5,
      .shadedown = -5,
      .roundness = 0.2f,
    },
    .wcol_list_item = {
      .outline = RGBA(0x252525ff),
      .inner_sel = RGBA(0x5680c2ff),
      .item = RGBA(0x000000ff),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xffffffff),
      .roundness = 0.2f,
    },
    .wcol_pie_menu = {
      .outline = RGBA(0x252525ff),
      .inner = RGBA(0x161616e6),
      .inner_sel = RGBA(0x8c8c8cff),
      .item = RGBA(0x2d2d2de6),
      .text = RGBA(0xccccccff),
      .text_sel = RGBA(0xffffffff),
      .shadetop = 10,
      .shadedown = -10,
      .roundness = 0.2f,
    },
    .wcol_state = {
      .inner_anim = RGBA(0x73be4cff),
      .inner_anim_sel = RGBA(0x5aa633ff),
      .inner_key = RGBA(0xf0eb64ff),
      .inner_key_sel = RGBA(0xd7d34bff),
      .inner_driven = RGBA(0xb400ffff),
      .inner_driven_sel = RGBA(0x9900e6ff),
      .inner_overridden = RGBA(0x19c3c300),
      .inner_overridden_sel = RGBA(0x118f8f00),
      .inner_changed = RGBA(0xcc7529ff),
      .inner_changed_sel = RGBA(0xe6852dff),
      .blend = 0.5f,
    },
    .widget_emboss = RGBA(0xffffff05),
    .menu_shadow_fac = 0.5f,
    .menu_shadow_width = 12,
    .editor_outline = RGBA(0x1f1f1fff),
    .transparent_checker_primary = RGBA(0x333333ff),
    .transparent_checker_secondary = RGBA(0x262626ff),
    .transparent_checker_size = 8,
    .icon_alpha = 1.0f,
    .icon_saturation = 0.5f,
    .widget_text_cursor = RGBA(0x3399e6ff),
    .xaxis = RGBA(0xff3352ff),
    .yaxis = RGBA(0x00ff00ff),
    .zaxis = RGBA(0x0080dcff),
    .gizmo_hi = RGBA(0xffffffff),
    .gizmo_primary = RGBA(0xf5f14dff),
    .gizmo_secondary = RGBA(0x63ffffff),
    .gizmo_view_align = RGBA(0xffffffff),
    .gizmo_a = RGBA(0x4da84dff),
    .gizmo_b = RGBA(0xa33535ff),
    .icon_collection = RGBA(0xccccccff),
    .icon_object = RGBA(0xcc986eff),
    .icon_object_data = RGBA(0x98cc98ff),
    .icon_modifier = RGBA(0x6e98ccff),
    .icon_shading = RGBA(0xcc6e6eff),
    .icon_folder = RGBA(0xffffffff),
    .panel_roundness = 0.4f,
  },
  .space_properties = {
    .back = RGBA(0x40404000),
    .title = RGBA(0xccccccff),
    .text = RGBA(0xccccccff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x40404000),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x232323ff),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x00000024),
    },
    .active = RGBA(0x5680c2ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .match = RGBA(0x5680c2ff),
  },
  .space_view3d = {
    .back = RGBA(0x666666ff),
    .back_grad = RGBA(0x40404000),
    .background_type = 1,
    .title = RGBA(0xffffffff),
    .text = RGBA(0xffffffff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x33333300),
    .header_text = RGBA(0xffffffff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x4d6b99ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333cc),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x40404000),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x00000026),
    },
    .grid = RGBA(0x8c8c8cff),
    .view_overlay = RGBA(0xffffff00),
    .wire = RGBA(0x000000ff),
    .wire_edit = RGBA(0x000000ff),
    .select = RGBA(0xf15800ff),
    .lamp = RGBA(0xd3c32d28),
    .speaker = RGBA(0x000000ff),
    .empty = RGBA(0xc93026ff),
    .camera = RGBA(0x3b95c3ff),
    .active = RGBA(0xffaa40ff),
    .transform = RGBA(0xffffffff),
    .vertex = RGBA(0x000000ff),
    .vertex_select = RGBA(0xff8500ff),
    .vertex_bevel = RGBA(0x00a5ffff),
    .edge = RGBA(0x000000ff),
    .edge_select = RGBA(0xffa000ff),
    .edge_seam = RGBA(0xdb2512ff),
    .edge_sharp = RGBA(0x00ffffff),
    .edge_facesel = RGBA(0x4b4b4bff),
    .edge_crease = RGBA(0xcc0099ff),
    .edge_bevel = RGBA(0x00a5ffff),
    .face = RGBA(0xffffff14),
    .face_select = RGBA(0xff85003c),
    .face_back = RGBA(0xff0000b3),
    .face_front = RGBA(0x0000ffb3),
    .face_dot = RGBA(0xff8500ff),
    .extra_edge_len = RGBA(0x00fbffff),
    .extra_edge_angle = RGBA(0xffff00ff),
    .extra_face_angle = RGBA(0x12ff00ff),
    .extra_face_area = RGBA(0x020080ff),
    .normal = RGBA(0x22ddddff),
    .vertex_normal = RGBA(0x2361ddff),
    .loop_normal = RGBA(0xdd23ddff),
    .bone_solid = RGBA(0xc8c8c8ff),
    .bone_pose = RGBA(0x50c8ff50),
    .bone_pose_active = RGBA(0x8cffff50),
    .bone_locked_weight = RGBA(0xff000080),
    .cframe = RGBA(0x60c040ff),
    .time_keyframe = RGBA(0xddd700ff),
    .time_gp_keyframe = RGBA(0xb5e61dff),
    .freestyle_edge_mark = RGBA(0x7fff7fff),
    .freestyle_face_mark = RGBA(0x7fff7f33),
    .nurb_uline = RGBA(0x909000ff),
    .nurb_vline = RGBA(0x803060ff),
    .act_spline = RGBA(0xdb2512ff),
    .nurb_sel_uline = RGBA(0xf0ff40ff),
    .nurb_sel_vline = RGBA(0xf090a0ff),
    .lastsel_point = RGBA(0xffffffff),
    .handle_free = RGBA(0x000000ff),
    .handle_auto = RGBA(0x909000ff),
    .handle_vect = RGBA(0x409030ff),
    .handle_align = RGBA(0x803060ff),
    .handle_sel_free = RGBA(0x000000ff),
    .handle_sel_auto = RGBA(0xf0ff40ff),
    .handle_sel_vect = RGBA(0x40c030ff),
    .handle_sel_align = RGBA(0xf090a0ff),
    .vertex_size = 6,
    .outline_width = 1,
    .obcenter_dia = 6,
    .facedot_size = 3,
    .editmesh_active = RGBA(0xffffff80),
    .clipping_border_3d = RGBA(0x313131ff),
    .bundle_solid = RGBA(0xc8c8c8ff),
    .camera_path = RGBA(0x000000ff),
    .gp_vertex_size = 3,
    .gp_vertex = RGBA(0x000000ff),
    .gp_vertex_select = RGBA(0xff8500ff),
    .skin_root = RGBA(0xb44d4dff),
    .paint_curve_pivot = RGBA(0xff7f7f7f),
    .paint_curve_handle = RGBA(0x7fff7f7f),
  },
  .space_file = {
    .back = RGBA(0x40404000),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xffffffff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x4040407f),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xffffffff),
    .button_text_hi = RGBA(0xffffffff),
    .execution_buts = RGBA(0x50505000),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .hilite = RGBA(0xff8c19ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .row_alternate = RGBA(0xffffff06),
  },
  .space_graph = {
    .back = RGBA(0x40404000),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xffffffff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x404040ff),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x404040ff),
    .list_title = RGBA(0x000000ff),
    .list_text = RGBA(0x000000ff),
    .list_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x33333302),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .shade1 = RGBA(0x96969600),
    .shade2 = RGBA(0x70707064),
    .grid = RGBA(0x5e5e5eff),
    .group = RGBA(0x4f6549ff),
    .group_active = RGBA(0x87b17dff),
    .vertex = RGBA(0x000000ff),
    .vertex_select = RGBA(0xff8500ff),
    .cframe = RGBA(0x60c040ff),
    .time_scrub_background = RGBA(0x292929cc),
    .time_marker_line = RGBA(0x00000060),
    .time_marker_line_selected = RGBA(0xffffff60),
    .lastsel_point = RGBA(0x000000ff),
    .handle_auto = RGBA(0x909000ff),
    .handle_vect = RGBA(0x409030ff),
    .handle_align = RGBA(0x803060ff),
    .handle_auto_clamped = RGBA(0x994030ff),
    .handle_sel_auto = RGBA(0xf0ff40ff),
    .handle_sel_vect = RGBA(0x40c030ff),
    .handle_sel_align = RGBA(0xf090a0ff),
    .handle_sel_auto_clamped = RGBA(0xf0af90ff),
    .ds_channel = RGBA(0x52606eff),
    .ds_subchannel = RGBA(0x7c8996ff),
    .vertex_size = 6,
    .outline_width = 1,
    .facedot_size = 4,
    .handle_vertex_select = RGBA(0xff8500ff),
    .handle_vertex_size = 6,
    .anim_preview_range = RGBA(0xa14d0066),
  },
  .space_info = {
    .back = RGBA(0x46464600),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xccccccff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x404040ff),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xccccccff),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .info_selected = RGBA(0x6080ffff),
    .info_selected_text = RGBA(0xffffffff),
    .info_error = RGBA(0xdc000000),
    .info_error_text = RGBA(0x000000ff),
    .info_warning = RGBA(0xf5bc41ff),
    .info_warning_text = RGBA(0x000000ff),
    .info_info = RGBA(0x00aa0000),
    .info_info_text = RGBA(0x000000ff),
    .info_debug = RGBA(0xc4c4c4ff),
    .info_property_text = RGBA(0x000000ff),
    .info_operator_text = RGBA(0x000000ff),
  },
  .space_action = {
    .back = RGBA(0x50505000),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xffffffff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x40404000),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x404040ff),
    .list_title = RGBA(0x000000ff),
    .list_text = RGBA(0x000000ff),
    .list_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x00000002),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .shade1 = RGBA(0x96969600),
    .shade2 = RGBA(0x70707010),
    .hilite = RGBA(0x60c04044),
    .grid = RGBA(0x000000ff),
    .group = RGBA(0x4f654937),
    .group_active = RGBA(0x87b17d55),
    .strip = RGBA(0x0c0a0a80),
    .strip_select = RGBA(0xff8c00cc),
    .cframe = RGBA(0x6bd848ff),
    .time_scrub_background = RGBA(0x292929e6),
    .time_marker_line = RGBA(0x00000060),
    .time_marker_line_selected = RGBA(0xffffff60),
    .ds_channel = RGBA(0x52606e24),
    .ds_subchannel = RGBA(0x7c899624),
    .ds_ipoline = RGBA(0x94e575cc),
    .keytype_keyframe = RGBA(0xe8e8e8ff),
    .keytype_extreme = RGBA(0xe8b3ccff),
    .keytype_breakdown = RGBA(0xb3dbe8ff),
    .keytype_jitter = RGBA(0x94e575ff),
    .keytype_movehold = RGBA(0x5c5656ff),
    .keytype_keyframe_select = RGBA(0xffbe32ff),
    .keytype_extreme_select = RGBA(0xf28080ff),
    .keytype_breakdown_select = RGBA(0x54bfedff),
    .keytype_jitter_select = RGBA(0x61c042ff),
    .keytype_movehold_select = RGBA(0xffaf23ff),
    .keyborder = RGBA(0x000000ff),
    .keyborder_select = RGBA(0x000000ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .keyframe_scale_fac = 1.0f,
    .handle_vertex_size = 4,
    .anim_active = RGBA(0xcc701a66),
    .anim_preview_range = RGBA(0xa14d0066),
  },
  .space_nla = {
    .back = RGBA(0x50505000),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xffffffff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x40404000),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x404040ff),
    .list_title = RGBA(0x000000ff),
    .list_text = RGBA(0x000000ff),
    .list_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .shade1 = RGBA(0x96969600),
    .grid = RGBA(0x5e5e5eff),
    .strip = RGBA(0x0c0a0a80),
    .strip_select = RGBA(0xff8c00ff),
    .cframe = RGBA(0x60c040ff),
    .time_scrub_background = RGBA(0x292929e6),
    .time_marker_line = RGBA(0x00000060),
    .time_marker_line_selected = RGBA(0xffffff60),
    .ds_channel = RGBA(0x5a85b2ff),
    .ds_subchannel = RGBA(0x7d98b3ff),
    .keyborder = RGBA(0x000000ff),
    .keyborder_select = RGBA(0x000000ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .handle_vertex_size = 4,
    .anim_active = RGBA(0xcc701a66),
    .anim_non_active = RGBA(0x9987614d),
    .anim_preview_range = RGBA(0xa14d0066),
    .nla_tweaking = RGBA(0x4df31a4d),
    .nla_tweakdupli = RGBA(0xd90000ff),
    .nla_track = RGBA(0x333333ff),
    .nla_transition = RGBA(0x1c2630ff),
    .nla_transition_sel = RGBA(0x2e75dbff),
    .nla_meta = RGBA(0x332642ff),
    .nla_meta_sel = RGBA(0x692196ff),
    .nla_sound = RGBA(0x2b3d3dff),
    .nla_sound_sel = RGBA(0x1f7a7aff),
  },
  .space_sequencer = {
    .back = RGBA(0x40404000),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xffffffff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x40404000),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x2c2c2c00),
    .list_title = RGBA(0xffffffff),
    .list_text = RGBA(0xffffffff),
    .list_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .shade1 = RGBA(0xa0a0a000),
    .grid = RGBA(0x212121ff),
    .vertex_select = RGBA(0xff8500ff),
    .bone_pose = RGBA(0x50c8ff50),
    .cframe = RGBA(0x60c040ff),
    .time_scrub_background = RGBA(0x292929e6),
    .time_marker_line = RGBA(0x00000060),
    .time_marker_line_selected = RGBA(0xffffff60),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .movie = RGBA(0x4d6890ff),
    .movieclip = RGBA(0x8f4c4cff),
    .mask = RGBA(0x8f5656ff),
    .image = RGBA(0x8f744bff),
    .scene = RGBA(0x828f50ff),
    .audio = RGBA(0x4c8f8fff),
    .effect = RGBA(0x598f4cff),
    .transition = RGBA(0x8f4571ff),
    .meta = RGBA(0x5b4d91ff),
    .text_strip = RGBA(0x824c8fff),
    .color_strip = RGBA(0x8f8f8fff),
    .active_strip = RGBA(0xffffffff),
    .selected_strip = RGBA(0xff8f0dff),
    .gp_vertex_size = 3,
    .gp_vertex_select = RGBA(0xff8500ff),
    .row_alternate = RGBA(0xffffff0d),
    .anim_preview_range = RGBA(0xa14d0066),
    .metadatatext = RGBA(0xffffffff),
  },
  .space_image = {
    .back = RGBA(0x4d4d4d00),
    .title = RGBA(0xffffffff),
    .text = RGBA(0x000000ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x40404000),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .grid = RGBA(0x505050ff),
    .wire_edit = RGBA(0xc0c0c0ff),
    .vertex_select = RGBA(0xff8500ff),
    .edge_select = RGBA(0xff8500ff),
    .face = RGBA(0xffffff0a),
    .face_select = RGBA(0xff85003c),
    .face_dot = RGBA(0xff8500ff),
    .cframe = RGBA(0x60c040ff),
    .freestyle_face_mark = RGBA(0x7fff7f33),
    .handle_auto = RGBA(0x909000ff),
    .handle_align = RGBA(0x803060ff),
    .handle_sel_auto = RGBA(0xf0ff40ff),
    .handle_sel_align = RGBA(0xf090a0ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 3,
    .editmesh_active = RGBA(0xffffff80),
    .handle_vertex_select = RGBA(0xffff00ff),
    .handle_vertex_size = 5,
    .gp_vertex_size = 3,
    .gp_vertex_select = RGBA(0xff8500ff),
    .preview_back = RGBA(0x727272ff),
    .preview_stitch_face = RGBA(0x1242b026),
    .preview_stitch_edge = RGBA(0xff8500b2),
    .preview_stitch_vert = RGBA(0xff85007f),
    .preview_stitch_stitchable = RGBA(0x00ff00ff),
    .preview_stitch_unstitchable = RGBA(0xff0000ff),
    .preview_stitch_active = RGBA(0xe1d2c323),
    .uv_shadow = RGBA(0x707070ff),
    .paint_curve_pivot = RGBA(0xff7f7f7f),
    .paint_curve_handle = RGBA(0x7fff7f7f),
    .metadatatext = RGBA(0xffffffff),
  },
  .space_text = {
    .back = RGBA(0xcccccc00),
    .title = RGBA(0xffffffff),
    .text = RGBA(0x000000ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x33333300),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x40404000),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .shade2 = RGBA(0xc67777e6),
    .hilite = RGBA(0xff0000ff),
    .grid = RGBA(0x999999ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .syntaxl = RGBA(0x640000ff),
    .syntaxs = RGBA(0x4c4c4cff),
    .syntaxb = RGBA(0x800050ff),
    .syntaxn = RGBA(0x0000c8ff),
    .syntaxv = RGBA(0x5f5f00ff),
    .syntaxc = RGBA(0x006432ff),
    .syntaxd = RGBA(0x32008cff),
    .syntaxr = RGBA(0x8c3c00ff),
    .line_numbers = RGBA(0x000000ff),
  },
  .space_outliner = {
    .back = RGBA(0x40404000),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xccccccff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x404040ff),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .active = RGBA(0x5680c2ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .match = RGBA(0x337f334c),
    .selected_highlight = RGBA(0x5b4633ff),
    .selected_object = RGBA(0xe96a00ff),
    .active_object = RGBA(0xffaf29ff),
    .edited_object = RGBA(0x00806266),
    .row_alternate = RGBA(0xffffff06),
  },
  .space_node = {
    .back = RGBA(0x40404000),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xffffffff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x40404000),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xffffffff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0xa5a5a5ff),
    .list_title = RGBA(0x000000ff),
    .list_text = RGBA(0x000000ff),
    .list_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .shade2 = RGBA(0x7f707064),
    .grid = RGBA(0x66666600),
    .wire = RGBA(0x808080ff),
    .select = RGBA(0xf15800ff),
    .active = RGBA(0xeefcffff),
    .edge_select = RGBA(0xffffffff),
    .console_output = RGBA(0x1a1a1aff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .noodle_curving = 5,
    .grid_levels = 7,
    .dash_alpha = 0.5f,
    .syntaxl = RGBA(0x4d4d4dff),
    .syntaxs = RGBA(0x975b5bff),
    .syntaxb = RGBA(0xccb83dff),
    .syntaxn = RGBA(0xe64555ff),
    .syntaxv = RGBA(0x66c4ffff),
    .syntaxc = RGBA(0x426628bf),
    .syntaxd = RGBA(0x749797ff),
    .syntaxr = RGBA(0x737373ff),
    .nodeclass_output = RGBA(0xb33641ff),
    .nodeclass_filter = RGBA(0x584d80ff),
    .nodeclass_vector = RGBA(0x9b80ffff),
    .nodeclass_texture = RGBA(0xe68745ff),
    .nodeclass_shader = RGBA(0x39c884ff),
    .nodeclass_script = RGBA(0x084d4dff),
    .nodeclass_pattern = RGBA(0x6c696fff),
    .nodeclass_layout = RGBA(0x6f6a64ff),
    .nodeclass_geometry = RGBA(0x00d7a4ff),
    .nodeclass_attribute = RGBA(0x3f5980ff),
    .movie = RGBA(0x1a1a1a7d),
    .gp_vertex_size = 3,
    .gp_vertex = RGBA(0x97979700),
    .gp_vertex_select = RGBA(0xff8500ff),
  },
  .space_preferences = {
    .back = RGBA(0x42424200),
    .title = RGBA(0xeeeeeeff),
    .text = RGBA(0xe6e6e6ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x424242ff),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x4b4b4bff),
    .tab_inactive = RGBA(0x2b2b2bff),
    .tab_back = RGBA(0x232323ff),
    .tab_outline = RGBA(0x232323ff),
    .button = RGBA(0x424242ff),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xe5e5e5ff),
    .button_text_hi = RGBA(0xffffffff),
    .navigation_bar = RGBA(0x373737ff),
    .execution_buts = RGBA(0x4b4b4bff),
    .panelcolors = {
      .header = RGBA(0x42424200),
      .back = RGBA(0x333333b3),
      .sub_back = RGBA(0x0000003e),
    },
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
  },
  .space_console = {
    .title = RGBA(0xffffffff),
    .text = RGBA(0x000000ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0x83e3f9ff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x75828f00),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xccccccff),
    .button_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .console_output = RGBA(0x6080ffff),
    .console_input = RGBA(0xffffffff),
    .console_info = RGBA(0x00aa00ff),
    .console_error = RGBA(0xdc6060ff),
    .console_cursor = RGBA(0xdc6060ff),
    .console_select = RGBA(0xffffff30),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
  },
  .space_clip = {
    .back = RGBA(0x45454500),
    .title = RGBA(0xffffffff),
    .text = RGBA(0x000000ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x333333ff),
    .header_text = RGBA(0xccccccff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x4d6b99ff),
    .tab_inactive = RGBA(0x333333ff),
    .tab_back = RGBA(0x333333ff),
    .tab_outline = RGBA(0x000000ff),
    .button = RGBA(0x40404000),
    .button_title = RGBA(0xccccccff),
    .button_text = RGBA(0xffffffff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x454545ff),
    .list_text = RGBA(0x808080ff),
    .list_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x333333ff),
      .back = RGBA(0x464646ff),
      .sub_back = RGBA(0x0000003e),
    },
    .grid = RGBA(0x424242ff),
    .strip = RGBA(0x0c0a0a80),
    .strip_select = RGBA(0xff8c00ff),
    .cframe = RGBA(0x60c040ff),
    .time_scrub_background = RGBA(0x292929e6),
    .time_marker_line = RGBA(0x00000060),
    .time_marker_line_selected = RGBA(0xffffff60),
    .handle_auto = RGBA(0x909000ff),
    .handle_align = RGBA(0x803060ff),
    .handle_sel_auto = RGBA(0xf0ff40ff),
    .handle_sel_align = RGBA(0xf090a0ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .handle_vertex_select = RGBA(0xffff00ff),
    .handle_vertex_size = 5,
    .marker = RGBA(0x7f7f00ff),
    .act_marker = RGBA(0xffffffff),
    .sel_marker = RGBA(0xffff00ff),
    .dis_marker = RGBA(0x7f0000ff),
    .lock_marker = RGBA(0x7f7f7fff),
    .path_before = RGBA(0xff0000ff),
    .path_after = RGBA(0x0000ffff),
    .path_keyframe_before = RGBA(0xffc4c4ff),
    .path_keyframe_after = RGBA(0xc4c4ffff),
    .gp_vertex_size = 1,
    .metadatatext = RGBA(0xffffffff),
  },
  .space_topbar = {
    .back = RGBA(0x4b4b4b00),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xffffffff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x232323ff),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x424242ff),
    .tab_back = RGBA(0x232323ff),
    .tab_outline = RGBA(0x2d2d2dff),
    .button = RGBA(0x424242ff),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xe5e5e5ff),
    .button_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x424242cc),
      .back = RGBA(0x333333b3),
      .sub_back = RGBA(0x0000003e),
    },
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .gp_vertex_size = 3,
  },
  .space_statusbar = {
    .back = RGBA(0x2e2e2e00),
    .title = RGBA(0xffffffff),
    .text = RGBA(0x838383ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x303030ff),
    .header_text = RGBA(0xaaaaaaff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x5680c2ff),
    .tab_inactive = RGBA(0x424242ff),
    .tab_back = RGBA(0x232323ff),
    .tab_outline = RGBA(0x2d2d2dff),
    .button = RGBA(0x353535ff),
    .button_text_hi = RGBA(0xffffffff),
    .panelcolors = {
      .header = RGBA(0x424242cc),
      .back = RGBA(0x333333b3),
      .sub_back = RGBA(0x0000003e),
    },
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .gp_vertex_size = 3,
  },
  .space_spreadsheet = {
    .back = RGBA(0x40404000),
    .title = RGBA(0xffffffff),
    .text = RGBA(0xc3c3c3ff),
    .text_hi = RGBA(0xffffffff),
    .header = RGBA(0x454545ff),
    .header_text = RGBA(0xeeeeeeff),
    .header_text_hi = RGBA(0xffffffff),
    .tab_active = RGBA(0x4b4b4bff),
    .tab_inactive = RGBA(0x2b2b2bff),
    .tab_back = RGBA(0x232323ff),
    .tab_outline = RGBA(0x232323ff),
    .button = RGBA(0x424242ff),
    .button_title = RGBA(0xffffffff),
    .button_text = RGBA(0xe5e5e5ff),
    .button_text_hi = RGBA(0xffffffff),
    .list = RGBA(0x424242ff),
    .list_title = RGBA(0xc3c3c3ff),
    .list_text = RGBA(0xc3c3c3ff),
    .list_text_hi = RGBA(0x00ffffff),
    .panelcolors = {
      .header = RGBA(0x424242cc),
      .back = RGBA(0x333333b3),
      .sub_back = RGBA(0x0000003e),
    },
    .hilite = RGBA(0x80808080),
    .active = RGBA(0x3b5689ff),
    .vertex_size = 3,
    .outline_width = 1,
    .facedot_size = 4,
    .match = RGBA(0x337f334c),
    .selected_highlight = RGBA(0x223a5bff),
    .selected_object = RGBA(0xe96a00ff),
    .active_object = RGBA(0xffaf29ff),
    .edited_object = RGBA(0x00806266),
    .row_alternate = RGBA(0xffffff06),
  },
  .tarm = {
    {
      .solid = RGBA(0x9a0000ff),
      .select = RGBA(0xbd1111ff),
      .active = RGBA(0xf70a0aff),
    },
    {
      .solid = RGBA(0xf74018ff),
      .select = RGBA(0xf66913ff),
      .active = RGBA(0xfa9900ff),
    },
    {
      .solid = RGBA(0x1e9109ff),
      .select = RGBA(0x59b70bff),
      .active = RGBA(0x83ef1dff),
    },
    {
      .solid = RGBA(0x0a3694ff),
      .select = RGBA(0x3667dfff),
      .active = RGBA(0x5ec1efff),
    },
    {
      .solid = RGBA(0xa9294eff),
      .select = RGBA(0xc1416aff),
      .active = RGBA(0xf05d91ff),
    },
    {
      .solid = RGBA(0x430c78ff),
      .select = RGBA(0x543aa3ff),
      .active = RGBA(0x8764d5ff),
    },
    {
      .solid = RGBA(0x24785aff),
      .select = RGBA(0x3c9579ff),
      .active = RGBA(0x6fb6abff),
    },
    {
      .solid = RGBA(0x4b707cff),
      .select = RGBA(0x6a8691ff),
      .active = RGBA(0x9bc2cdff),
    },
    {
      .solid = RGBA(0xf4c90cff),
      .select = RGBA(0xeec236ff),
      .active = RGBA(0xf3ff00ff),
    },
    {
      .solid = RGBA(0x1e2024ff),
      .select = RGBA(0x484c56ff),
      .active = RGBA(0xffffffff),
    },
    {
      .solid = RGBA(0x6f2f6aff),
      .select = RGBA(0x9845beff),
      .active = RGBA(0xd330d6ff),
    },
    {
      .solid = RGBA(0x6c8e22ff),
      .select = RGBA(0x7fb022ff),
      .active = RGBA(0xbbef5bff),
    },
    {
      .solid = RGBA(0x8d8d8dff),
      .select = RGBA(0xb0b0b0ff),
      .active = RGBA(0xdededeff),
    },
    {
      .solid = RGBA(0x834326ff),
      .select = RGBA(0x8b5811ff),
      .active = RGBA(0xbd6a11ff),
    },
    {
      .solid = RGBA(0x08310eff),
      .select = RGBA(0x1c430bff),
      .active = RGBA(0x34622bff),
    },
    {
      .solid = RGBA(0x000000ff),
      .select = RGBA(0x000000ff),
      .active = RGBA(0x000000ff),
    },
    {
      .solid = RGBA(0x000000ff),
      .select = RGBA(0x000000ff),
      .active = RGBA(0x000000ff),
    },
    {
      .solid = RGBA(0x000000ff),
      .select = RGBA(0x000000ff),
      .active = RGBA(0x000000ff),
    },
    {
      .solid = RGBA(0x000000ff),
      .select = RGBA(0x000000ff),
      .active = RGBA(0x000000ff),
    },
    {
      .solid = RGBA(0x000000ff),
      .select = RGBA(0x000000ff),
      .active = RGBA(0x000000ff),
    },
  },
  .collection_color = {
    {
      .color = RGBA(0xe2605bff),
    },
    {
      .color = RGBA(0xf1a355ff),
    },
    {
      .color = RGBA(0xe4dd52ff),
    },
    {
      .color = RGBA(0x7bcc7bff),
    },
    {
      .color = RGBA(0x5db6eaff),
    },
    {
      .color = RGBA(0x8d59daff),
    },
    {
      .color = RGBA(0xc673b8ff),
    },
    {
      .color = RGBA(0x7a5441ff),
    },
  },
  .strip_color = {
    {
      .color = RGBA(0xe2605bff),
    },
    {
      .color = RGBA(0xf1a355ff),
    },
    {
      .color = RGBA(0xf1dc55ff),
    },
    {
      .color = RGBA(0x7bcc7bff),
    },
    {
      .color = RGBA(0x5db6eaff),
    },
    {
      .color = RGBA(0x8d59daff),
    },
    {
      .color = RGBA(0xc673b8ff),
    },
    {
      .color = RGBA(0x7a5441ff),
    },
    {
      .color = RGBA(0x5f5f5fff),
    },
  },
};

/* clang-format on */
