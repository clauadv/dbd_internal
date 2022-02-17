#pragma once

namespace sdk {
	struct vector;
	struct rotator;

	enum class stereoscopic_pass {
		essp_full,
		essp_left_eye,
		essp_right_eye,
		essp_left_eye_side,
		essp_right_eye_side
	};

	struct minimal_view_info {
		sdk::vector location;
		sdk::rotator rotation;
		float fov;
	};
}