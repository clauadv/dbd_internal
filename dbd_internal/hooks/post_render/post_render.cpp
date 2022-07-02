#include <includes.h>
#include "../hooks.h"

void __stdcall hooks::post_render::hook(ue4::core_object::u_object* viewport_client, ue4::engine::u_canvas* canvas) {
	render::canvas = canvas;

	const auto world = *reinterpret_cast<decltype(ue4::engine::world)*>(ue4::engine::world);
	if (!world) return;

	const auto local_player = world->owning_game_instance->local_players[0];
	if (!local_player) return;

	const auto player_controller = local_player->player_controller;
	if (!player_controller) return;

	hooks::delta_time = reinterpret_cast<dbd::gameplay_statics::u_gameplay_statics*>(viewport_client)->get_delta_time();

	const auto my_player = player_controller->acknowledged_pawn;
	if (!my_player) return;

	menu::handle_input(my_player, player_controller);
	features::run(world, my_player, player_controller);

	hooks::post_render::original(viewport_client, canvas);
}