#include <pch.h>
#include "../features.h"

void visuals::killer::run(const sdk::u_world* world, sdk::a_pawn* my_player, sdk::a_player_controller* player_controller) {
	auto actors = world->persistent_level->actors;
	for (auto i = 0; i < actors.size(); i++) {
		const auto actor = actors[i];
		if (!actor || !actor->root_component) continue;

		const auto pawn = actor->instigator;
		if (!pawn) continue;

		std::call_once(flag, [] {
			bones::killer::initialize();
		});

		const auto slasher = reinterpret_cast<sdk::a_slasher_player*>(pawn);
		if (!slasher) continue;
		if (slasher == my_player) continue;

		if (slasher->is_killer()) {
			const auto mesh = pawn->mesh;
			if (!mesh) continue;

			const auto state = pawn->player_state;
			if (!state) continue;

			const auto root = mesh->get_bone(0, player_controller);
			if (root.is_zero()) continue;

			killer::name(root, my_player, slasher);
			killer::skeleton(slasher, player_controller, mesh);
			killer::snapline(root);
		}
	}
}

void visuals::killer::name(const sdk::vector_2d& root, sdk::a_pawn* my_player, sdk::a_slasher_player* slasher) {
	if (!variables::killer::name) return;

	const auto character_name = slasher->get_character_name();
	const auto distance = my_player->get_distance_to_string(slasher);
	const auto color = sdk::color{
		variables::killer::name_color[0],
		variables::killer::name_color[1],
		variables::killer::name_color[2],
		variables::killer::name_color[3]
	};

	std::wstring name;

	if (variables::killer::distance) {
		name.append(character_name.first.c_str()).append(L" [").append(distance).append(L"]");
	} else {
		name.append(character_name.first.c_str());
	}

	render::text(root.x, root.y + 2.f, name.c_str(), color);
}

void visuals::killer::skeleton(const sdk::a_slasher_player* slasher, sdk::a_player_controller* player_controller, sdk::u_skeletal_mesh_component* mesh) {
	if (!variables::killer::skeleton) return;
	if (slasher->is_victor()) return;

	const auto color = sdk::color{
		variables::killer::skeleton_color[0] * 255,
		variables::killer::skeleton_color[1] * 255,
		variables::killer::skeleton_color[2] * 255,
		variables::killer::skeleton_color[3] * 255
	};

	for (const auto& bone : bones::killer::get_bone_array(slasher)) {
		sdk::vector_2d first_bone{}, second_bone{};

		auto first = mesh->get_bone_matrix(bone.first);
		auto second = mesh->get_bone_matrix(bone.second);

		if (player_controller->world_to_screen(first, first_bone) && player_controller->world_to_screen(second, second_bone)) {
			render::line(first_bone.x, first_bone.y, second_bone.x, second_bone.y, 1.f, color);
		}
	}
}


void visuals::killer::snapline(const sdk::vector_2d& root) {
	if (!variables::killer::snapline) return;

	const auto color = sdk::color{
		variables::killer::snapline_color[0] * 255,
		variables::killer::snapline_color[1] * 255,
		variables::killer::snapline_color[2] * 255,
		variables::killer::snapline_color[3] * 255
	};

	render::line(root.x, root.y, render::screen.x / 2.f, render::screen.y, 1.f, color);
}