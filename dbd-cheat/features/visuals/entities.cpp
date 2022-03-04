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

			const auto distance = my_player->get_distance_to_string(actor);
			const auto location = actor->get_location();

			const auto my_camper = reinterpret_cast<sdk::a_camper_player*>(my_player);
			if (!my_camper) continue;

			if (my_player->get_distance_to(actor) * 0.01f >= variables::entities::max_distance) continue;

			generator::name(actor, distance, location, player_controller, my_camper);
			pallet::name(actor, distance, location, player_controller, my_camper);
			door::name(actor, distance, location, player_controller, my_camper);
			chest::name(actor, distance, location, player_controller, my_camper);
			window::name(actor, distance, location, player_controller, my_camper);
			totem::name(actor, distance, location, player_controller, my_camper);
			hatch::name(actor, distance, location, player_controller, my_camper);
			trap::name(actor, distance, location, player_controller, my_camper);
		}
	}
}

void visuals::entities::generator::name(sdk::a_actor* actor, const std::wstring& distance, const sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player) {
	if (!variables::entities::generator) return;

	const auto generator = reinterpret_cast<sdk::a_generator*>(actor);
	if (!generator) return;

	const auto color = sdk::color{
		variables::entities::generator_color[0],
		variables::entities::generator_color[1],
		variables::entities::generator_color[2],
		variables::entities::generator_color[3]
	};

	if (generator->is_generator()) {
		std::wstring name;

		// if the generator is repaired, don't to render it
		if (generator->is_repaired) return;

		if (generator->is_blocked) {
			name.append(L"generator").append(L" [").append(distance).append(L"]").append(L" [").append(L"blocked").append(L"]");
		} else {
			name.append(L"generator").append(L" [").append(distance).append(L"]").append(L" [").append(generator->get_repair_percent()).append(L"%]");
		}

		sdk::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {
			render::text(position.x, position.y, name.c_str(), color);
		}
	}
}

void visuals::entities::pallet::name(sdk::a_actor* actor, const std::wstring& distance, const sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player) {
	if (!variables::entities::pallet) return;

	const auto pallet = reinterpret_cast<sdk::a_pallet*>(actor);
	if (!pallet) return;

	const auto color = sdk::color{
		variables::entities::pallet_color[0],
		variables::entities::pallet_color[1],
		variables::entities::pallet_color[2],
		variables::entities::pallet_color[3]
	};

	if (pallet->is_pallet()) {
		std::wstring name;

		// if the pallet is destroyed, don't to render it
		if (pallet->state == sdk::e_pallet_state::destroyed) return;

		if (pallet->state == sdk::e_pallet_state::fallen) {
			name.append(L"pallet").append(L" [").append(distance).append(L"]").append(L" [").append(L"fallen").append(L"]");
		} else if (pallet->state == sdk::e_pallet_state::illusionary) {
			name.append(L"pallet").append(L" [").append(distance).append(L"]").append(L" [").append(L"illusionary").append(L"]");
		} else {
			name.append(L"pallet").append(L" [").append(distance).append(L"]");
		}

		sdk::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {
			render::text(position.x, position.y, name.c_str(), color);
		}
	}
}

void visuals::entities::chest::name(sdk::a_actor* actor, const std::wstring& distance, const sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player) {
	if (!variables::entities::chest) return;

	const auto chest = reinterpret_cast<sdk::a_chest*>(actor);
	if (!chest) return;

	const auto color = sdk::color{
		variables::entities::chest_color[0],
		variables::entities::chest_color[1],
		variables::entities::chest_color[2],
		variables::entities::chest_color[3]
	};

	if (chest->is_chest()) {
		std::wstring name;

		// if the chest is opened, don't to render it
		if (chest->has_been_searched) return;

		name.append(L"chest").append(L" [").append(distance).append(L"]");

		sdk::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {
			render::text(position.x, position.y, name.c_str(), color);
		}
	}
}

void visuals::entities::door::name(sdk::a_actor* actor, const std::wstring& distance, const sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player) {
	if (!variables::entities::door) return;

	const auto door = reinterpret_cast<sdk::a_escape_door*>(actor);
	if (!door) return;

	const auto color = sdk::color{
		variables::entities::door_color[0],
		variables::entities::door_color[1],
		variables::entities::door_color[2],
		variables::entities::door_color[3]
	};

	if (door->is_escape_door()) {
		std::wstring name;

		name.append(L"door").append(L" [").append(distance).append(L"]");

		sdk::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {
			render::text(position.x, position.y, name.c_str(), color);
		}
	}
}

void visuals::entities::window::name(sdk::a_actor* actor, const std::wstring& distance, const sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player) {
	if (!variables::entities::window) return;

	const auto window = reinterpret_cast<sdk::a_window*>(actor);
	if (!window) return;

	const auto color = sdk::color{
		variables::entities::window_color[0],
		variables::entities::window_color[1],
		variables::entities::window_color[2],
		variables::entities::window_color[3]
	};

	if (window->is_window()) {
		std::wstring name;

		if (window->is_window_blocked_for(my_player)) {
			name.append(L"window").append(L" [").append(distance).append(L"]").append(L" [").append(L"blocked").append(L"]");
		} else {
			name.append(L"window").append(L" [").append(distance).append(L"]");
		}

		sdk::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {
			render::text(position.x, position.y, name.c_str(), color);
		}
	}
}

void visuals::entities::totem::name(sdk::a_actor* actor, const std::wstring& distance, const sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player) {
	if (!variables::entities::totem) return;

	const auto totem = reinterpret_cast<sdk::a_totem*>(actor);
	if (!totem) return;

	const auto color = sdk::color{
		variables::entities::totem_color[0],
		variables::entities::totem_color[1],
		variables::entities::totem_color[2],
		variables::entities::totem_color[3]
	};

	if (totem->is_totem()) {
		std::wstring name;

		// if the totem is cleansed, don't render it
		if (totem->state == sdk::e_totem_state::cleansed) return;

		if (totem->state == sdk::e_totem_state::hex) {
			name.append(L"totem").append(L" [").append(distance).append(L"]").append(L" [").append(L"hex").append(L"]");
		} else if (totem->state == sdk::e_totem_state::boon) {
			name.append(L"totem").append(L" [").append(distance).append(L"]").append(L" [").append(L"boon").append(L"]");
		} else {
			name.append(L"totem").append(L" [").append(distance).append(L"]");
		}

		sdk::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {
			render::text(position.x, position.y, name.c_str(), color);
		}
	}
}

void visuals::entities::hatch::name(sdk::a_actor* actor, const std::wstring& distance, const sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player) {
	if (!variables::entities::hatch) return;

	const auto hatch = reinterpret_cast<sdk::a_hatch*>(actor);
	if (!hatch) return;

	const auto color = sdk::color{
		variables::entities::hatch_color[0],
		variables::entities::hatch_color[1],
		variables::entities::hatch_color[2],
		variables::entities::hatch_color[3]
	};

	if (hatch->is_hatch()) {
		std::wstring name;

		if (hatch->state == sdk::e_hatch_state::hidden) {
			name.append(L"hatch").append(L" [").append(distance).append(L"]").append(L" [").append(L"hidden").append(L"]");
		} else if (hatch->state == sdk::e_hatch_state::default_close || hatch->state == sdk::e_hatch_state::forced_close) {
			name.append(L"hatch").append(L" [").append(distance).append(L"]").append(L" [").append(L"closed").append(L"]");
		} else if (hatch->state == sdk::e_hatch_state::opened) {
			name.append(L"hatch").append(L" [").append(distance).append(L"]").append(L" [").append(L"opened").append(L"]");
		}

		sdk::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {
			render::text(position.x, position.y, name.c_str(), color);
		}
	}
}

void visuals::entities::trap::name(sdk::a_actor* actor, const std::wstring& distance, const sdk::vector location, sdk::a_player_controller* player_controller, sdk::a_camper_player* my_player) {
	if (!variables::entities::trap) return;

	const auto bear_trap = reinterpret_cast<sdk::a_bear_trap*>(actor);
	if (!bear_trap) return;

	const auto color = sdk::color{
		variables::entities::trap_color[0],
		variables::entities::trap_color[1],
		variables::entities::trap_color[2],
		variables::entities::trap_color[3]
	};

	if (bear_trap->is_bear_trap()) {
		std::wstring name;

		name.append(L"trap").append(L" [").append(distance).append(L"]");

		sdk::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {
			render::text(position.x, position.y, name.c_str(), color);
		}
	}
}