#include <includes.h>
#include "hooks.h"

bool hooks::initialize() {
	const auto world = *reinterpret_cast<decltype(ue4::engine::world)*>(ue4::engine::world);
	if (!world) return false;

	const auto local_player = world->owning_game_instance->local_players[0];
	if (!local_player) return false;

	const auto viewport_client = local_player->viewport_client;
	if (!viewport_client) return false;

	void** viewport_client_vtable = viewport_client->vf_table;
	if (!viewport_client_vtable) return false;

	if (MH_Initialize() != MH_OK) throw std::runtime_error(_("failed to initialize min_hook"));

	if (MH_CreateHook(viewport_client_vtable[hooks::post_render::index], &hooks::post_render::hook, reinterpret_cast<void**>(&hooks::post_render::original)) != MH_OK) {
		throw std::runtime_error(_("failed to hook post_render"));
	}

	if (d3d11::initialize()) {
		if (MH_CreateHook(reinterpret_cast<void*>(d3d11::get_present()), &present::hook, reinterpret_cast<void**>(&present::original)) != MH_OK) {
			throw std::runtime_error(_("failed to hook present"));
		}
	}

	if (MH_CreateHook((void*)ue4::sdk::set_fov, &hooks::set_fov::hook, reinterpret_cast<void**>(&hooks::set_fov::original)) != MH_OK) {
		throw std::runtime_error(_("failed to hook set_fov"));
	}

	if (MH_EnableHook(nullptr) != MH_OK) throw std::runtime_error(_("failed to initialize hooks"));

	return true;
}

bool hooks::release() {
	MH_Uninitialize();

	MH_DisableHook(nullptr);
	MH_RemoveHook(nullptr);

	utils::console::release();

	return true;
}