#include <pch.h>
#include "../hooks/hooks.h"
#include "../utils/utils.h"

namespace sdk {
	bool initialize() {
		const auto main = reinterpret_cast<std::uintptr_t>(LI_FN(GetModuleHandleA)(nullptr));
		if (!main) return false;

		sdk::name_pool = reinterpret_cast<decltype(sdk::name_pool)>(utils::pattern_scan(main, _("48 8D 1D ? ? ? ? EB 16 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B D8 C6 05 ? ? ? ? ? 0F 28"), true));
		if (!sdk::name_pool) return false;

		sdk::object_array = reinterpret_cast<decltype(sdk::object_array)>(utils::pattern_scan(main, _("48 8B 05 ? ? ? ? 48 8B 0C C8 4C 8D 04 D1 EB"), true));
		if (!sdk::object_array) return false;

		sdk::world = reinterpret_cast<decltype(sdk::world)>(utils::pattern_scan(main, _("48 8B 1D ? ? ? ? 48 85 DB 74 3B 41 B0 01 33 D2 48 8B CB E8"), true));
		if (!sdk::world) return false;

		sdk::get_bone_matrix = utils::pattern_scan(main, _("48 8B C4 48 89 58 ? 48 89 70 ? 55 57 41 54 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? 0F 29 78 ? 33 F6"));
		if (!sdk::get_bone_matrix) return false;

		sdk::unlock_all = utils::pattern_scan(main, _("48 8B 05 ? ? ? ? 83 38 00 75 31"), true);
		if (!sdk::unlock_all) return false;

		*reinterpret_cast<short*>(sdk::unlock_all) = 1;

		sdk::font = sdk::object_array->find_object(_("Font Roboto.Roboto"));

		// canvas
		sdk::draw_box = sdk::object_array->find_object(_("Function Engine.Canvas.K2_DrawBox"));
		sdk::draw_line = sdk::object_array->find_object(_("Function Engine.Canvas.K2_DrawLine"));
		sdk::draw_text = sdk::object_array->find_object(_("Function Engine.Canvas.K2_DrawText"));
		sdk::draw_polygon = sdk::object_array->find_object(_("Function Engine.Canvas.K2_DrawPolygon"));
		sdk::text_size = sdk::object_array->find_object(_("Function Engine.Canvas.K2_TextSize"));

		// player_controller
		sdk::world_to_screen = sdk::object_array->find_object(_("Function Engine.PlayerController.ProjectWorldLocationToScreen"));

		// player_state
		sdk::get_dbd_player_state = sdk::object_array->find_object(_("Function DeadByDaylight.DBDPlayer.GetDBDPlayerState"));
		sdk::get_player_state = sdk::object_array->find_object(_("Function DeadByDaylight.DBDPlayerState.GetPlayerGameState"));
		sdk::set_player_state = sdk::object_array->find_object(_("Function DeadByDaylight.DBDPlayerState.Server_SetPlayerGameState"));
		sdk::set_player_role = sdk::object_array->find_object(_("Function DeadByDaylight.DBDPlayerState.Server_SetGameRole"));

		// skinned_mesh_component
		sdk::get_bone_name = sdk::object_array->find_object(_("Function Engine.SkinnedMeshComponent.GetBoneName"));

		// actor
		sdk::get_actor_location = sdk::object_array->find_object(_("Function Engine.Actor.K2_GetActorLocation"));
		sdk::get_actor_rotation = sdk::object_array->find_object(_("Function Engine.Actor.K2_GetActorRotation"));
		sdk::get_actor_bounds = sdk::object_array->find_object(_("Function Engine.Actor.GetActorBounds"));
		sdk::get_distance_to = sdk::object_array->find_object(_("Function Engine.Actor.GetDistanceTo"));
		sdk::enable_input = sdk::object_array->find_object(_("Function Engine.Actor.EnableInput"));
		sdk::disable_input = sdk::object_array->find_object(_("Function Engine.Actor.DisableInput"));

		// pawn
		sdk::launch_character = sdk::object_array->find_object(_("Function Engine.Character.LaunchCharacter"));

		// window
		sdk::is_window_blocked_for = sdk::object_array->find_object(_("Function DeadByDaylight.Window.IsWindowVaultBlockedFor"));

		// skillcheck
		sdk::get_player_interaction = sdk::object_array->find_object(_("Function DeadByDaylight.DBDPlayer.GetPlayerInteractionHandler"));
		sdk::skillcheck_input = sdk::object_array->find_object(_("Function DeadByDaylight.SkillCheck.OnSkillCheckInput"));
		sdk::is_displayed = sdk::object_array->find_object(_("Function DeadByDaylight.SkillCheck.IsDisplayed"));

		// camper_player
		sdk::trap_immunity = sdk::object_array->find_object(_("Function DeadByDaylight.DBDPlayer.TriggerTrapImmunity"));
		sdk::is_carried = sdk::object_array->find_object(_("Function DeadByDaylight.CamperPlayer.IsBeingCarried"));
		sdk::set_immobilized = sdk::object_array->find_object(_("Function DeadByDaylight.CamperPlayer.Server_SetImmobilized"));

		// gameplay_statics
		sdk::get_delta_time = sdk::object_array->find_object(_("Function Engine.GameplayStatics.GetWorldDeltaSeconds"));

		hooks::initialize();

		return true;
	}
}