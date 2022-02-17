#pragma once

namespace sdk {
	struct vector_2d;
	struct vector;
	struct a_pawn;
	struct u_player;
	struct a_controller;

	struct a_player_controller : sdk::a_controller {
		char pad_0001[0x80]; // 0x230(0x80)
		sdk::u_player* player; // 0x2b0(0x08)
		sdk::a_pawn* acknowledged_pawn; // 0x2b8(0x08)

		bool world_to_screen(const sdk::vector& world, sdk::vector_2d& screen);
	};
}