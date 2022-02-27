#include <pch.h>
#include "hooks.h"
#include "../features/features.h"

bool hooks::initialize() {
	const auto world = *reinterpret_cast<decltype(sdk::world)*>(sdk::world);
	if (!world) return false;

	const auto game_instance = world->owning_game_instance;
	if (!game_instance) return false;

	const auto local_player = game_instance->local_players[0];
	if (!local_player) return false;

	// fov changer
	local_player->aspect_ratio_axis = sdk::e_aspect_ratio_axis::maintain_y_fov;

	const auto viewport_client = local_player->viewport_client;
	if (!viewport_client) return false;

	void** viewport_client_vtable = viewport_client->vf_table;
	if (!viewport_client_vtable) return false;

	if (MH_Initialize() != MH_OK) {
		throw std::runtime_error(_("failed to initialize hooking system."));
	}

	if (MH_CreateHook(viewport_client_vtable[post_render::index], &post_render::hook, reinterpret_cast<void**>(&post_render::original)) != MH_OK) {
		throw std::runtime_error(_("failed to initialize post render."));
	}

	if (MH_EnableHook(nullptr) != MH_OK) {
		throw std::runtime_error(_("failed to initialize hooks."));
	}

	return true;
}

void __stdcall hooks::post_render::hook(sdk::u_object* viewport_client, sdk::u_canvas* canvas) {
	render::canvas = canvas;

	render::text(50.f, 50.f, _(L"dbd-cheat"), [=]() {
		static std::uint32_t cnt = 0;
		constexpr float freq = .01f;

		const auto color = sdk::color(
			std::sin(freq * cnt + 0) * 127 + 128,
			std::sin(freq * cnt + 2) * 127 + 128,
			std::sin(freq * cnt + 4) * 127 + 128,
			255
		);

		if (cnt++ >= static_cast<std::uint32_t>(-1)) {
			cnt = 0;
		}

		return color;
	}());

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
	visuals::entities::run(world, my_player, player_controller);

	post_render::original(viewport_client, canvas);
}