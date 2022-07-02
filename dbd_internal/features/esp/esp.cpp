#include <includes.h>

void features::esp::players::draw(ue4::game_framework::a_pawn* pawn, ue4::game_framework::a_pawn* my_player, ue4::components::u_skeletal_mesh_component* mesh, ue4::game_framework::a_player_controller* player_controller) {
	const auto dbd_player_state = reinterpret_cast<dbd::dbd_player::a_dbd_player*>(pawn)->get_dbd_player_state();
	if (!dbd_player_state) return;

	const auto player_game_state = dbd_player_state->get_player_game_state();
	if (player_game_state != dbd::dbd_player_state::player_state::active) return;

	const auto root = mesh->get_bone(0, player_controller);
	if (root.is_zero()) return;

	const auto team = reinterpret_cast<dbd::dbd_player::a_dbd_player*>(pawn)->get_player_team();
	const auto color = reinterpret_cast<dbd::dbd_player::a_dbd_player*>(pawn)->get_player_color(team);

	// draw name
	{
		if (!variables::players::name) return;

		const auto name = dbd_player_state->player_name_private;
		const auto distance = my_player->get_distance_to_string(pawn);

		std::wstring text;
		text.append(name.c_str()).append(L" [").append(distance).append(L"]");
		std::ranges::transform(text.begin(), text.end(), text.begin(), ::tolower);

		render::text({ root.x, root.y + 2.f }, text.c_str(), color);
	}

	// draw skeleton
	{
		if (!variables::players::skeleton) return;

		for (const auto& bone : dbd::bones::get_array(mesh, pawn)) {
			ue4::math::vector_2d first_bone{}, second_bone{};

			auto first = mesh->get_bone_matrix(bone.first);
			auto second = mesh->get_bone_matrix(bone.second);

			if (player_controller->world_to_screen(first, first_bone) && player_controller->world_to_screen(second, second_bone)) {
				render::line({ first_bone.x, first_bone.y }, { second_bone.x, second_bone.y }, 1.f, { 1.f, 1.f, 1.f, 1.f });
			}
		}
	}

	// draw snap lines
	{
		if (!variables::players::snapline) return;

		render::line(root, { render::screen.x / 2.f, render::screen.y }, 1.f, color);
	}
}

void features::esp::entities::draw(ue4::game_framework::a_actor* actor, ue4::game_framework::a_pawn* my_player, ue4::game_framework::a_player_controller* player_controller) {
	if (actor->is_a(ue4::sdk::generator) || actor->is_a(ue4::sdk::searchable) || actor->is_a(ue4::sdk::escape_door) ||
		actor->is_a(ue4::sdk::hatch) || actor->is_a(ue4::sdk::locker) || actor->is_a(ue4::sdk::pallet) ||
		actor->is_a(ue4::sdk::window) || actor->is_a(ue4::sdk::totem) || actor->is_a(ue4::sdk::zombie)) {

		const auto distance_string = my_player->get_distance_to_string(actor);
		const auto actor_name = actor->get_actor_name(my_player, distance_string);

		const auto distance = my_player->get_distance_to(actor);
		if (distance * 0.01f >= std::get<2>(actor_name)) return;

		const auto location = actor->get_location();

		ue4::math::vector_2d position{};
		if (player_controller->world_to_screen(location, position)) {

			// draw name
			{
				render::text(position, std::get<0>(actor_name), std::get<1>(actor_name));
			}
		}
	}
}