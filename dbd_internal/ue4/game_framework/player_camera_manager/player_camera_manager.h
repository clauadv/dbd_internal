#pragma once

namespace ue4::game_framework {
	class a_player_camera_manager : public ue4::game_framework::a_actor {
	public:
		char pad_0001[0x104]; // 0x148(0x104)
		float default_fov; // 0x24c(0x04)

		ue4::math::vector get_camera_rotation();
	};
}