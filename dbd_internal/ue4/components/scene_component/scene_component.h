#pragma once

namespace ue4::components {
	class u_scene_component{
	public:
		char pad_0001[0x134]; // 0x00(0x134)
		ue4::math::vector relative_location; // 0x134(0x0c)
		ue4::math::rotator relative_rotation; // 0x140(0x0c)
	};
}