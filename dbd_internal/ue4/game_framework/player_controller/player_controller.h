#pragma once

namespace ue4::game_framework {
	class a_player_camera_manager;

	class a_player_controller : public ue4::game_framework::a_controller {
	public:
		char pad_0001[0x70]; // 0x240(0x70)
		ue4::engine::u_player* player; // 0x2b0(0x08)
		ue4::game_framework::a_pawn* acknowledged_pawn; // 0x2b8(0x08)
		char pad_0002[0x10]; // 0x2c0(0x10)
		ue4::game_framework::a_player_camera_manager* player_camera_manager; // 0x2d0(0x08)

		bool world_to_screen(const ue4::math::vector& world, ue4::math::vector_2d& screen);
	};
}