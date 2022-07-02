#pragma once
#include <corecrt_math_defines.h>

namespace ue4::math {
	class vector {
	public:
		float x, y, z;

		inline ue4::math::vector operator+(const ue4::math::vector& a) const {
			return { x + a.x, y + a.y, z + a.z };
		}

		inline void operator+=(const ue4::math::vector& a) {
			x += a.x, y += a.y, z += a.z;
		}

		inline ue4::math::vector operator-(const ue4::math::vector& a) const {
			return { x - a.x, y - a.y, z - a.z };
		}

		inline void operator-=(const ue4::math::vector& a) {
			x -= a.x, y -= a.y, z -= a.z;
		}

		inline ue4::math::vector operator*(const ue4::math::vector& a) const {
			return { x * a.x, y * a.y, z * a.z };
		}

		inline void operator*=(const ue4::math::vector& a) {
			x *= a.x, y *= a.y, z *= a.z;
		}

		inline ue4::math::vector operator/(const ue4::math::vector& a) const {
			return { x / a.x, y / a.y, z / a.z };
		}

		inline void operator/=(const ue4::math::vector& a) {
			x /= a.x, y /= a.y, z /= a.z;
		}

		inline ue4::math::vector operator+(const float a) const {
			return { x + a, y + a, z + a };
		}

		inline void operator+=(const float a) {
			x += a, y += a, z += a;
		}

		inline ue4::math::vector operator-(const float a) const {
			return { x - a, y - a, z - a };
		}

		inline void operator-=(const float a) {
			x -= a, y -= a, z -= a;
		}

		inline ue4::math::vector operator*(const float a) const {
			return { x * a, y * a, z * a };
		}

		inline void operator*=(const float a) {
			x *= a, y *= a, z *= a;
		}

		inline ue4::math::vector operator/(const float a) const {
			return { x / a, y / a, z / a };
		}

		inline void operator/=(const float a) {
			x /= a, y /= a, z /= a;
		}

		inline ue4::math::vector forward() const {
			float sp{}, sy{}, cp{}, cy{};
			float angle{};

			angle = y * (M_PI / 180.0f);
			sy = sinf(angle);
			cy = cosf(angle);

			angle = -x * (M_PI / 180.0f);
			sp = sinf(angle);
			cp = cosf(angle);

			return { cp * cy, cp * sy, -sp };
		}
	};
}