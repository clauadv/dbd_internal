#include <pch.h>
#include "hooks.h"
#include "../features/features.h"
#include "../utils/utils.h"

hooks::post_render::fn post_render_original;

bool hooks::initialize() {
	const auto world = *reinterpret_cast<decltype(sdk::world)*>(sdk::world);
	if (!world) return false;

	const auto game_instance = world->owning_game_instance;
	if (!game_instance) return false;

	const auto local_player = game_instance->local_players[0];
	if (!local_player) return false;

	const auto viewport_client = local_player->viewport_client;
	if (!viewport_client) return false;

	void** viewport_client_vtable = viewport_client->vf_table;
	if (!viewport_client_vtable) return false;

	DWORD protect;
	VirtualProtect(&viewport_client_vtable[post_render::index], 8, PAGE_EXECUTE_READWRITE, &protect);
	post_render_original = reinterpret_cast<decltype(post_render_original)>(viewport_client_vtable[post_render::index]);
	viewport_client_vtable[post_render::index] = &post_render::hook;
	VirtualProtect(&viewport_client_vtable[post_render::index], 8, protect, nullptr);

	return true;
}

void __stdcall hooks::post_render::hook(sdk::u_object* viewport_client, sdk::u_canvas* canvas) {
	render::canvas = canvas;

	render::text(50.f, 50.f, _(L"dbd-cheat"), { 255, 255, 255, 255 });

	const auto world = *reinterpret_cast<sdk::u_world**>(sdk::world);
	if (!world) return;

	const auto game_state = world->game_state;
	if (!game_state) return;

	const auto local_player = world->owning_game_instance->local_players[0];
	if (!local_player) return;

	const auto player_controller = local_player->player_controller;
	if (!player_controller) return;

	const auto my_player = player_controller->acknowledged_pawn;
	if (!my_player) return;

	visuals::killer::run(world, my_player, player_controller);
	visuals::survivor::run(world, my_player, player_controller);

	post_render_original(viewport_client, canvas);
}