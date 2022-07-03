#include <includes.h>

void features::misc::auto_skillcheck::run(ue4::game_framework::a_pawn* my_player) {
	if (!variables::misc::auto_skillcheck) return;

	if (reinterpret_cast<dbd::dbd_player::a_dbd_player*>(my_player)->is_carried()) return;

	const auto player_interaction = reinterpret_cast<dbd::dbd_player::a_dbd_player*>(my_player)->get_player_interaction();
	if (!player_interaction) return;

	const auto skillcheck = player_interaction->skillcheck;
	if (!skillcheck) return;

	// https://www.unknowncheats.me/forum/3308610-post950.html
	const auto current_progress = *reinterpret_cast<float*>(reinterpret_cast<std::uintptr_t>(skillcheck) + 0x14c);
	const auto success_zone = *reinterpret_cast<float*>(reinterpret_cast<std::uintptr_t>(skillcheck) + 0x190);

	if (skillcheck->is_displayed() && current_progress > success_zone) {
		skillcheck->on_input();
	}
}

void features::misc::speed_hack::run(ue4::game_framework::a_pawn* my_player, ue4::game_framework::a_player_controller* player_controller) {
	if (!variables::misc::speed_hack) return;

	if (LI_FN(GetAsyncKeyState)(variables::misc::speed_key)) {
		variables::misc::speed_state = !variables::misc::speed_state;
	}

	if (!variables::misc::speed_state) return;

	const auto player_camera = player_controller->player_camera_manager;
	if (!player_camera) return;

	const auto camera_rotation = player_camera->get_camera_rotation();
	const auto speed = variables::misc::speed;

	ue4::math::vector position{};
	ue4::math::vector rotation{};

	if (LI_FN(GetAsyncKeyState)('W')) {
		position += camera_rotation.forward() * speed;

	} else if (LI_FN(GetAsyncKeyState)('S')) {
		rotation = {
			-camera_rotation.x,
			camera_rotation.y + 180.f,
			0.f
		};

		position += rotation.forward() * speed;
	}

	if (LI_FN(GetAsyncKeyState)('D')) {
		rotation = {
			0.f,
			camera_rotation.y + 90.f,
			0.f
		};

		position += rotation.forward() * speed;

	} else if (LI_FN(GetAsyncKeyState)('A')) {
		rotation = {
			0.f,
			camera_rotation.y + 270.f,
			0.f
		};

		position += rotation.forward() * speed;
	}

	if (LI_FN(GetAsyncKeyState)(VK_LCONTROL)) {
		position.z -= speed / 2.f;

	} else if (LI_FN(GetAsyncKeyState)(VK_SPACE)) {
		position.z += speed / 2.f;
	}

	my_player->launch_character(position);
}

void features::misc::set_state::run(ue4::game_framework::a_pawn* my_player) {
	if (!variables::misc::state) return;
	if (!LI_FN(GetAsyncKeyState)(variables::misc::state_key) & 0x01) return;

	reinterpret_cast<dbd::dbd_player::a_dbd_player*>(my_player)->set_state(static_cast<dbd::dbd_player::state_type>(variables::misc::state_type));
}

void features::misc::trap_immunity::run(ue4::game_framework::a_pawn* my_player) {
	if (!variables::misc::trap_immunity) return;

	reinterpret_cast<dbd::dbd_player::a_dbd_player*>(my_player)->trap_immunity();
}