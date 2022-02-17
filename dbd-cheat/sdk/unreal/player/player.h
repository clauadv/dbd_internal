#pragma once

namespace sdk {
	struct a_player_controller;

	struct u_player {
		char pad_0001[0x38]; // 0x00(0x38)
		sdk::a_player_controller* player_controller; // 0x38(0x08)
		char pad_0002[0x38]; // 0x40(0x38)
		sdk::u_object* viewport_client; // 0x78(0x08)
		char pad_0003[0x1c]; // 0x80(0x1c)
		sdk::t_enum_as_byte<sdk::e_aspect_ratio_axis> aspect_ratio_axis; // 0x9c(0x01)
	};
}