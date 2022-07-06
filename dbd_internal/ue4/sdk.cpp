#include <includes.h>
#include "../hooks/hooks.h"

bool ue4::sdk::initialize() {
	const auto main = reinterpret_cast<std::uintptr_t>(LI_FN(GetModuleHandleA)(nullptr));
	if (!main) throw std::runtime_error(_("failed to get main handle"));

	ue4::core_object::names = reinterpret_cast<decltype(ue4::core_object::names)>(utils::pattern_scan(main, _("48 8D 1D ? ? ? ? EB 16 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B D8 C6 05 ? ? ? ? ? 0F 28"), true));
	if (!ue4::core_object::names) throw std::runtime_error(_("failed to get ue4::core_object::names"));

	ue4::core_object::objects = reinterpret_cast<decltype(ue4::core_object::objects)>(utils::pattern_scan(main, _("48 8B 05 ? ? ? ? 48 8B 0C C8 4C 8D 04 D1 EB"), true));
	if (!ue4::core_object::objects) throw std::runtime_error(_("failed to get ue4::core_object::objects"));

	ue4::engine::world = reinterpret_cast<decltype(ue4::engine::world)>(utils::pattern_scan(main, _("48 8B 1D ? ? ? ? 48 85 DB 74 3B 41 B0 01 33 D2 48 8B CB E8"), true));
	if (!ue4::engine::world) throw std::runtime_error(_("failed to get ue4::engine::world"));

	ue4::sdk::bone_matrix = utils::pattern_scan(main, _("48 8B C4 48 89 58 ? 48 89 70 ? 55 57 41 54 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? 0F 29 78 ? 33 F6"));
	if (!sdk::bone_matrix) throw std::runtime_error(_("failed to get ue4::sdk::bone_matrix"));

	ue4::sdk::unlock_items = utils::pattern_scan(main, _("48 8B 05 ? ? ? ? 83 38 00 75 31"), true);
	if (!sdk::unlock_items) throw std::runtime_error(_("failed to get ue4::sdk::unlock_items"));

	ue4::sdk::set_fov = utils::pattern_scan(main, "F3 0F 10 B1 50 02");
	if (!sdk::set_fov) throw std::runtime_error(_("failed to get ue4::sdk::set_fov"));

	*reinterpret_cast<short*>(sdk::unlock_items) = 1;

	// u_canvas
	ue4::sdk::font = ue4::core_object::objects->find(_("Font Roboto.Roboto"));
	ue4::sdk::draw_box = ue4::core_object::objects->find(_("Function Engine.Canvas.K2_DrawBox"));
	ue4::sdk::draw_line = ue4::core_object::objects->find(_("Function Engine.Canvas.K2_DrawLine"));
	ue4::sdk::draw_text = ue4::core_object::objects->find(_("Function Engine.Canvas.K2_DrawText"));
	ue4::sdk::draw_polygon = ue4::core_object::objects->find(_("Function Engine.Canvas.K2_DrawPolygon"));
	ue4::sdk::text_size = ue4::core_object::objects->find(_("Function Engine.Canvas.K2_TextSize"));

	// a_player_controller
	ue4::sdk::world_to_screen = ue4::core_object::objects->find(_("Function Engine.PlayerController.ProjectWorldLocationToScreen"));

	// a_actor
	ue4::sdk::get_actor_location = ue4::core_object::objects->find(_("Function Engine.Actor.K2_GetActorLocation"));
	ue4::sdk::get_actor_rotation = ue4::core_object::objects->find(_("Function Engine.Actor.K2_GetActorRotation"));
	ue4::sdk::get_actor_bounds = ue4::core_object::objects->find(_("Function Engine.Actor.GetActorBounds"));
	ue4::sdk::get_distance_to = ue4::core_object::objects->find(_("Function Engine.Actor.GetDistanceTo"));
	ue4::sdk::enable_input = ue4::core_object::objects->find(_("Function Engine.Actor.EnableInput"));
	ue4::sdk::disable_input = ue4::core_object::objects->find(_("Function Engine.Actor.DisableInput"));

	// a_pawn
	ue4::sdk::launch_character = ue4::core_object::objects->find(_("Function Engine.Character.LaunchCharacter"));

	// a_player_camera_manager
	ue4::sdk::get_camera_rotation = ue4::core_object::objects->find(_("Function Engine.PlayerCameraManager.GetCameraRotation"));

	// u_skeletal_mesh_component
	ue4::sdk::get_bone_name = ue4::core_object::objects->find(_("Function Engine.SkinnedMeshComponent.GetBoneName"));
	ue4::sdk::get_bones_num = ue4::core_object::objects->find(_("Function Engine.SkinnedMeshComponent.GetNumBones"));

	// a_dbd_player
	ue4::sdk::get_dbd_player_state = ue4::core_object::objects->find(_("Function DeadByDaylight.DBDPlayer.GetDBDPlayerState"));
	ue4::sdk::get_player_team = ue4::core_object::objects->find(_("Function DeadByDaylight.DBDPlayer.GetPlayerTeam"));
	ue4::sdk::get_player_interaction = ue4::core_object::objects->find(_("Function DeadByDaylight.DBDPlayer.GetPlayerInteractionHandler"));
	ue4::sdk::set_state = ue4::core_object::objects->find(_("Function DeadByDaylight.CamperPlayer.Server_SetImmobilized"));
	ue4::sdk::is_carried = ue4::core_object::objects->find(_("Function DeadByDaylight.CamperPlayer.IsBeingCarried"));
	ue4::sdk::trap_immunity = ue4::core_object::objects->find(_("Function DeadByDaylight.DBDPlayer.TriggerTrapImmunity"));

	// a_dbd_game_state
	ue4::sdk::get_player_game_state = ue4::core_object::objects->find(_("Function DeadByDaylight.DBDPlayerState.GetPlayerGameState"));

	// u_gameplay_statics
	ue4::sdk::get_delta_time = ue4::core_object::objects->find(_("Function Engine.GameplayStatics.GetWorldDeltaSeconds"));

	// u_skillcheck
	ue4::sdk::is_displayed = ue4::core_object::objects->find(_("Function DeadByDaylight.SkillCheck.IsDisplayed"));
	ue4::sdk::on_input = ue4::core_object::objects->find(_("Function DeadByDaylight.SkillCheck.OnSkillCheckInput"));

	// a_generator
	ue4::sdk::generator = ue4::core_object::objects->find(_("Class DeadByDaylight.Generator"));

	// a_searchable
	ue4::sdk::searchable = ue4::core_object::objects->find(_("Class DeadByDaylight.Searchable"));

	// a_escape_door
	ue4::sdk::escape_door = ue4::core_object::objects->find(_("Class DeadByDaylight.EscapeDoor"));
	ue4::sdk::is_opened = ue4::core_object::objects->find(_("Function DeadByDaylight.EscapeDoor.GetIsOpen"));

	// a_hatch
	ue4::sdk::hatch = ue4::core_object::objects->find(_("Class DeadByDaylight.Hatch"));

	// a_locker
	ue4::sdk::locker = ue4::core_object::objects->find(_("Class DeadByDaylight.Locker"));

	// a_pallet
	ue4::sdk::pallet = ue4::core_object::objects->find(_("Class DeadByDaylight.Pallet"));

	// a_window
	ue4::sdk::window = ue4::core_object::objects->find(_("Class DeadByDaylight.Window"));
	ue4::sdk::is_window_blocked = ue4::core_object::objects->find(_("Function DeadByDaylight.Window.IsWindowVaultBlockedFor"));

	// a_totem
	ue4::sdk::totem = ue4::core_object::objects->find(_("Class DeadByDaylight.Totem"));

	// a_zombie
	ue4::sdk::zombie = ue4::core_object::objects->find(_("Class TheK24.ZombieCharacter"));

	return true;
}
