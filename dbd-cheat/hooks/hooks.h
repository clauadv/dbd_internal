#pragma once
#include "../sdk/sdk.h"

namespace hooks {
	inline void(*o_post_render)(sdk::UObject* game_viewport_client, sdk::UCanvas* canvas);
	inline void post_render_hk(sdk::UObject* game_viewport_client, sdk::UCanvas* canvas) {
		canvas->K2_DrawText(L"gta_sa", { 50.f, 50.f }, sdk::FVector2D{ 1.0f, 1.0f }, sdk::FLinearColor{ 1.f, 1.f, 1.f, 1.f }, 1.0f, sdk::FLinearColor{ 0, 0, 0, 0 }, sdk::FVector2D{ 0, 0 }, true, false, false, sdk::FLinearColor{ 0, 0, 0, 1.f });

		const auto world = *reinterpret_cast<sdk::UWorld**>(sdk::world);
		if (!world) return;

		const auto game_state = world->GameState();
		if (!game_state) return;

		const auto local_player = world->OwningGameInstance()->LocalPlayers()[0];
		if (!local_player) return;

		const auto player_controller = local_player->PlayerController();
		if (!player_controller) return;

		auto players = game_state->PlayerArray();
		for (int i = 0; i < players.size(); i++) {
			const auto player = players[i]->PawnPrivate();
			if (!player) continue;

			auto name = player->GetName();
			const auto color = name.starts_with("BP_Slasher_Character") ?
				sdk::FLinearColor{ 1.f, 0.f, 0.f, 1.f } : sdk::FLinearColor{ 1.f, 1.f, 1.f, 1.f };

			auto actor_location = player->K2_GetActorLocation();
			const auto actor_name = name.starts_with("BP_Slasher_Character") ?
				L"Killer" : L"Survivor"; //players[i]->PlayerNamePrivate();

			auto screen_position = sdk::FVector2D{};
			player_controller->ProjectWorldLocationToScreen(actor_location, screen_position);
			if (screen_position.X == 0.f && screen_position.Y == 0.f) continue;

			canvas->K2_DrawText(actor_name, screen_position, sdk::FVector2D{1.0f, 1.0f}, color, 1.0f, sdk::FLinearColor{0, 0, 0, 0}, sdk::FVector2D{0, 0}, true, false, false, sdk::FLinearColor{0, 0, 0, 1.f});
		}

		o_post_render(game_viewport_client, canvas);
	}

	inline bool init() {
		const auto world = *reinterpret_cast<decltype(sdk::world)*>(sdk::world);
		if (!world) return false;

		const auto game_instance = world->OwningGameInstance();
		if (!game_instance) return false;

		const auto local_player = game_instance->LocalPlayers()[0];
		if (!local_player) return false;

		const auto viewport_client = local_player->ViewportClient();
		if (!viewport_client) return false;

		void** viewport_client_vtable = viewport_client->VfTable;
		if (!viewport_client_vtable) return false;

		// minhook?
		DWORD protect;
		VirtualProtect(&viewport_client_vtable[99], 8, PAGE_EXECUTE_READWRITE, &protect);
		o_post_render = reinterpret_cast<decltype(o_post_render)>(viewport_client_vtable[99]);
		viewport_client_vtable[99] = &post_render_hk;
		VirtualProtect(&viewport_client_vtable[99], 8, protect, nullptr);

		return true;
	}
}