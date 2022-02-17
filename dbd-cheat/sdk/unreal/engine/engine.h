#pragma once

namespace sdk {
	enum class e_aspect_ratio_axis : std::uint8_t {
		maintain_y_fov = 0,
		maintain_x_fov = 1,
		major_axis_fov = 2,
		max = 3
	};
}