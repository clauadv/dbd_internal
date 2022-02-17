#pragma once

namespace sdk {
	struct vector;
	struct rotator;

	struct u_scene_component {
		char pad_0001[0x134]; // 0x00(0x134)
		sdk::vector relative_location; // 0x134(0x0c)
		sdk::rotator relative_rotation; // 0x140(0x0c)
	};
}