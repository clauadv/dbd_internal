#pragma once

#include <windows.h>
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

#include "utils/libraries/xor.h"
#include "utils/libraries/lazy_importer.h"

#include "sdk/sdk.h"
#include "sdk/misc/survivor_bones.h"
#include "sdk/misc/killer_bones.h"

#include "sdk/other/array.h"
#include "sdk/other/color.h"
#include "sdk/other/enum_as_byte.h"
#include "sdk/other/math.h"
#include "sdk/other/string.h"
#include "sdk/other/view_info.h"

#include "sdk/unreal/world/world.h"
#include "sdk/unreal/name_pool/name_pool.h"
#include "sdk/unreal/object_array/object_array.h"
#include "sdk/unreal/engine/engine.h"
#include "sdk/unreal/actor/actor.h"
#include "sdk/unreal/pawn/pawn.h"
#include "sdk/unreal/canvas/canvas.h"
#include "sdk/unreal/field/field.h"
#include "sdk/unreal/struct/struct.h"
#include "sdk/unreal/class/class.h"
#include "sdk/unreal/controller/controller.h"
#include "sdk/unreal/game_instance/game_instance.h"
#include "sdk/unreal/game_state_base/game_state_base.h"
#include "sdk/unreal/level/level.h"
#include "sdk/unreal/player/player.h"
#include "sdk/unreal/player_controller/player_controller.h"
#include "sdk/unreal/player_state/player_state.h"
#include "sdk/unreal/scene_component/scene_component.h"
#include "sdk/unreal/skeletal_mesh_component/skeletal_mesh_component.h"
#include "sdk/unreal/slasher_player/slasher_player.h"
#include "sdk/unreal/camper_player/camper_player.h"
#include "sdk/unreal/generator/generator.h"
#include "sdk/unreal/pallet/pallet.h"
#include "sdk/unreal/chest/chest.h"