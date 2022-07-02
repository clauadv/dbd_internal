#pragma once

#include <Windows.h>
#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>
#include <iomanip>
#include <list>
#include <sstream>
#include <mutex>
#include <utility>
#include <cstdint>
#include <future>
#include <array>
#include <d3d11.h>

#include "utils/utils.h"
#include "utils/libraries/minhook/include/MinHook.h"
#include "utils/libraries/xor.h"
#include "utils/libraries/lazy_importer.h"
#include "utils/libraries/fnv.h"

#include "utils/libraries/imgui/imgui.h"
#include "utils/libraries/imgui/imgui_impl_dx11.h"
#include "utils/libraries/imgui/imgui_impl_win32.h"
#include "utils/libraries/imgui/imgui_internal.h"

#include "ue4/sdk.h"

#include "ue4/math/vector.h"
#include "ue4/math/vector_2d.h"
#include "ue4/math/rotator.h"
#include "ue4/math/color.h"
#include "ue4/math/matrix.h"
#include "ue4/containers/array.h"
#include "ue4/containers/string.h"
#include "ue4/containers/enum_as_byte.h"

#include "ue4/engine/world/world.h"
#include "ue4/core_object/name/name.h"
#include "ue4/core_object/object/object.h"

#include "ue4/core_object/field/field.h"
#include "ue4/core_object/struct/struct.h"
#include "ue4/core_object/class/class.h"
#include "ue4/engine/canvas/canvas.h"
#include "ue4/engine/game_instance/game_instance.h"
#include "ue4/engine/player/player.h"
#include "ue4/engine/level/level.h"
#include "ue4/game_framework/actor/actor.h"
#include "ue4/game_framework/pawn/pawn.h"
#include "ue4/game_framework/controller/controller.h"
#include "ue4/game_framework/player_controller/player_controller.h"
#include "ue4/game_framework/player_state/player_state.h"
#include "ue4/game_framework/game_state_base/game_state_base.h"
#include "ue4/game_framework/player_camera_manager/player_camera_manager.h"
#include "ue4/components/scene_component/scene_component.h"
#include "ue4/components/skeletal_mesh_component/skeletal_mesh_component.h"

#include "features/features.h"
#include "dbd/dbd_player_state/dbd_player_state.h"
#include "dbd/player_interaction/player_interaction.h"
#include "dbd/dbd_player/dbd_player.h"
#include "dbd/generator/generator.h"
#include "dbd/searchable/searchable.h"
#include "dbd/escape_door/escape_door.h"
#include "dbd/hatch/hatch.h"
#include "dbd/locker/locker.h"
#include "dbd/pallet/pallet.h"
#include "dbd/window/window.h"
#include "dbd/totem/totem.h"
#include "dbd/skillcheck/skillcheck.h"
#include "dbd/gameplay_statics/gameplay_statics.h"
#include "dbd/bones/bones.h"

#include "menu/d3d11/d3d11.h"
#include "menu/menu.h"

#include "render/render.h"