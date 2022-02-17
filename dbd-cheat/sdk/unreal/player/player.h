#pragma once

namespace sdk {
	struct a_player_controller;

	struct u_player {
		char pad_0001[0x38]; // 0x00(0x38)
		sdk::a_player_controller* player_controller; // 0x38(0x08)
		char pad_0002[0x38]; // 0x40(0x38)
		sdk::u_object* viewport_client; // 0x78(0x08)
	};
}