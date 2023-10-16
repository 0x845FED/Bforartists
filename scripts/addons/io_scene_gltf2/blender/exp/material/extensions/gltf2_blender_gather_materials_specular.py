# SPDX-FileCopyrightText: 2018-2022 The glTF-Blender-IO authors
#
# SPDX-License-Identifier: Apache-2.0

import bpy
from .....io.com.gltf2_io_extensions import Extension
from ...material.gltf2_blender_gather_texture_info import gather_texture_info
from ..gltf2_blender_search_node_tree import \
    has_image_node_from_socket, \
    get_socket, \
    get_factor_from_socket


def export_specular(blender_material, export_settings):
    specular_extension = {}

    specular_socket = get_socket(blender_material, 'Specular IOR Level')
    speculartint_socket = get_socket(blender_material, 'Specular Tint')

    if specular_socket.socket is None or speculartint_socket.socket is None:
        return None, {}

    uvmap_infos = {}

    specular_non_linked = isinstance(specular_socket.socket, bpy.types.NodeSocket) and not specular_socket.socket.is_linked
    specularcolor_non_linked = isinstance(speculartint_socket.socket, bpy.types.NodeSocket) and not speculartint_socket.socket.is_linked

    if specular_non_linked is True:
        fac = specular_socket.socket.default_value
        if fac != 1.0:
            specular_extension['specularFactor'] = fac
        if fac == 0.0:
            return None, {}
    else:
        # Factor
        fac = get_factor_from_socket(specular_socket, kind='VALUE')
        if fac is not None and fac != 1.0:
            specular_extension['specularFactor'] = fac

        if fac == 0.0:
            return None, {}

        # Texture
        if has_image_node_from_socket(specular_socket, export_settings):
            specular_texture, uvmap_info, _ = gather_texture_info(
                specular_socket,
                (specular_socket,),
                (),
                export_settings,
            )
            specular_extension['specularTexture'] = specular_texture
            uvmap_infos.update({'specularTexture': uvmap_info})

    if specularcolor_non_linked is True:
        color = speculartint_socket.socket.default_value[:3]
        if color != (1.0, 1.0, 1.0):
            specular_extension['specularColorFactor'] = color
    else:
        # Factor
        fac = get_factor_from_socket(speculartint_socket, kind='RGB')
        if fac is not None and fac != (1.0, 1.0, 1.0):
            specular_extension['specularColorFactor'] = fac

        # Texture
        if has_image_node_from_socket(speculartint_socket, export_settings):
            specularcolor_texture, uvmap_info, _ = gather_texture_info(
                speculartint_socket,
                (speculartint_socket,),
                (),
                export_settings,
            )
            specular_extension['specularColorTexture'] = specularcolor_texture
            uvmap_infos.update({'specularColorTexture': uvmap_info})

    return Extension('KHR_materials_specular', specular_extension, False), uvmap_infos
