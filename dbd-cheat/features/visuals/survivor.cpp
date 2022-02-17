#include <pch.h>
#include "../features.h"

void visuals::survivor::run(const sdk::u_world* world, sdk::a_pawn* my_player, sdk::a_player_controller* player_controller) {
	auto actors = world->persistent_level->actors;
	for (auto i = 0; i < actors.size(); i++) {
		const auto actor = actors[i];
		if (!actor || !actor->root_component) continue;

		const auto pawn = actor->instigator;
		if (!pawn) continue;

		std::call_once(flag, []() {
			bones::survivor::initialize();
		});

		const auto camper = reinterpret_cast<sdk::a_camper_player*>(pawn);
		if (!camper) continue;
		if (camper == my_player) continue;

		if (camper->is_survivor()) {
			const auto mesh = pawn->mesh;
			if (!mesh) continue;

			const auto state = pawn->player_state;
			if (!state) continue;

			const auto root = mesh->get_bone(0, player_controller);
			if (root.is_zero()) continue;

			name(root, my_player, camper);
			skeleton(camper, player_controller, mesh);
		}
	}
}

void visuals::survivor::name(const sdk::vector_2d& root, sdk::a_pawn* my_player, sdk::a_camper_player* camper) {
	const auto character_name = camper->get_character_name();
	const auto distance = my_player->get_distance_to_string(camper);

	std::wstring name;
	name.append(character_name.first.c_str()).append(L" [").append(distance).append(L"]");

	render::text(root.x, root.y + 2.f, name.c_str(), character_name.second);
}

void visuals::survivor::skeleton(const sdk::a_camper_player* camper, sdk::a_player_controller* player_controller, sdk::u_skeletal_mesh_component* mesh) {
	for (const auto& bone : bones::survivor::get_bone_array(camper)) {
		sdk::vector_2d first_bone{}, second_bone{};

		auto first = mesh->get_bone_matrix(bone.first);
		auto second = mesh->get_bone_matrix(bone.second);

		if (player_controller->world_to_screen(first, first_bone) && player_controller->world_to_screen(second, second_bone)) {
			render::line(first_bone.x, first_bone.y, second_bone.x, second_bone.y, 1.f, { 255, 255, 255, 255 });
		}
	}
}