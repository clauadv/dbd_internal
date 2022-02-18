#include <pch.h>
#include "../features.h"

void visuals::entities::run(const sdk::u_world* world, sdk::a_pawn* my_player, sdk::a_player_controller* player_controller) {
	auto levels = world->levels;
	for (auto i = 0; i < levels.size(); i++) {
		if (!levels.is_valid(i)) break;

		const auto level = levels[i];
		if (!level) continue;

		for (auto actors = 0; i < level->actors.size(); actors++) {
			if (!level || !level->actors.is_valid(actors)) break;

			const auto actor = level->actors[actors];
			if (!actor || !actor->root_component) continue;

			// if the distance (in meters) between local and the entity is higher or equal to 30 don't render it
			if (my_player->get_distance_to(actor) * 0.01f >= 30) continue;

			const auto distance = my_player->get_distance_to_string(actor);
			const auto location = actor->get_location();

			generator::name(actor, distance, location, player_controller);
			pallet::name(actor, distance, location, player_controller);
			chest::name(actor, distance, location, player_controller);
		}
	}
}

void visuals::entities::generator::name(sdk::a_actor* actor, const std::wstring& distance, const sdk::vector location, sdk::a_player_controller* player_controller) {
	const auto generator = reinterpret_cast<sdk::a_generator*>(actor);
	if (!generator) return;

	if (generator->is_generator()) {
		std::wstring name;

		if (generator->is_blocked) {
			name.append(L"generator").append(L" [").append(distance).append(L"]").append(L" [").append(L"blocked").append(L"]");
		} else if (generator->is_repaired) {
			name.append(L"generator").append(L" [").append(distance).append(L"]").append(L" [").append(L"repaired").append(L"]");
		} else {
			name.append(L"generator").append(L" [").append(distance).append(L"]").append(L" [").append(generator->get_repair_percent()).append(L"%]");
		}

		sdk::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {
			render::text(position.x, position.y, name.c_str(), { 52, 134, 235, 255 });
		}
	}
}

void visuals::entities::pallet::name(sdk::a_actor* actor, const std::wstring& distance, const sdk::vector location, sdk::a_player_controller* player_controller) {
	const auto pallet = reinterpret_cast<sdk::a_pallet*>(actor);
	if (!pallet) return;

	if (pallet->is_pallet()) {
		std::wstring name;

		name.append(L"pallet").append(L" [").append(distance).append(L"]");

		sdk::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {
			render::text(position.x, position.y, name.c_str(), { 52, 134, 235, 255 });
		}
	}
}

void visuals::entities::chest::name(sdk::a_actor* actor, const std::wstring& distance, const sdk::vector location, sdk::a_player_controller* player_controller) {
	const auto chest = reinterpret_cast<sdk::a_chest*>(actor);
	if (!chest) return;

	if (chest->is_chest()) {
		std::wstring name;

		if (chest->has_been_searched) {
			name.append(L"chest").append(L" [").append(distance).append(L"]").append(L" [").append(L"opened").append(L"]");
		} else {
			name.append(L"chest").append(L" [").append(distance).append(L"]");
		}

		sdk::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {
			render::text(position.x, position.y, name.c_str(), { 52, 134, 235, 255 });
		}
	}
}