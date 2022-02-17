#pragma once

namespace sdk {
	struct matrix {
		float m[4][4];
	};

	struct vector_2d {
		float x, y;

		bool is_zero() const {
			if (x == 0.f && y == 0.f) {
				return true;
			}

			return false;
		}
	};

	struct vector {
		float x, y, z;
	};

	struct rotator {
		float x, y, z;
	};
}