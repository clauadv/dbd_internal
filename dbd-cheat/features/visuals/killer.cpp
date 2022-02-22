#include <pch.h>
#include "../features.h"

void visuals::killer::run(const sdk::u_world* world, sdk::a_pawn* my_player, sdk::a_player_controller* player_controller) {
	auto actors = world->persistent_level->actors;
	for (auto i = 0; i < actors.size(); i++) {
		const auto actor = actors[i];
		if (!actor || !actor->root_component) continue;

		const auto pawn = actor->instigator;
		if (!pawn) continue;

		std::call_once(flag, []() {
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

			name(root, my_player, slasher);
			skeleton(slasher, player_controller, mesh);
		}
	}
}

void visuals::killer::name(const sdk::vector_2d& root, sdk::a_pawn* my_player, sdk::a_slasher_player* slasher) {
	const auto character_name = slasher->get_character_name();
	const auto distance = my_player->get_distance_to_string(slasher);

	std::wstring name;
	name.append(character_name.first.c_str()).append(L" [").append(distance).append(L"]");

	render::text(root.x, root.y + 2.f, name.c_str(), character_name.second);
}

void visuals::killer::skeleton(const sdk::a_slasher_player* slasher, sdk::a_player_controller* player_controller, sdk::u_skeletal_mesh_component* mesh) {
	if (slasher->is_nurse() || slasher->is_demogorgon() || slasher->is_victor()) return;

	for (const auto& bone : bones::killer::get_bone_array(slasher)) {
		sdk::vector_2d first_bone{}, second_bone{};

		auto first = mesh->get_bone_matrix(bone.first);
		auto second = mesh->get_bone_matrix(bone.second);

		if (player_controller->world_to_screen(first, first_bone) && player_controller->world_to_screen(second, second_bone)) {
			render::line(first_bone.x, first_bone.y, second_bone.x, second_bone.y, 1.f, { 255, 255, 255, 255 });
		}
	}
}