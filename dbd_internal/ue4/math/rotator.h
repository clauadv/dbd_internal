#pragma once

namespace ue4::math {
	class rotator {
	public:
		float x, y, z;

		inline ue4::math::rotator operator+(const ue4::math::rotator& a) const {
			return { x + a.x, y + a.y, z + a.z };
		}

		inline void operator+=(const ue4::math::rotator& a) {
			x += a.x, y += a.y, z += a.z;
		}

		inline ue4::math::rotator operator-(const ue4::math::rotator& a) const {
			return { x - a.x, y - a.y, z - a.z };
		}

		inline void operator-=(const ue4::math::rotator& a) {
			x -= a.x, y -= a.y, z -= a.z;
		}

		inline ue4::math::rotator operator*(const ue4::math::rotator& a) const {
			return { x * a.x, y * a.y, z * a.z };
		}

		inline void operator*=(const ue4::math::rotator& a) {
			x *= a.x, y *= a.y, z *= a.z;
		}

		inline ue4::math::rotator operator/(const ue4::math::rotator& a) const {
			return { x / a.x, y / a.y, z / a.z };
		}

		inline void operator/=(const ue4::math::rotator& a) {
			x /= a.x, y /= a.y, z /= a.z;
		}

		inline ue4::math::rotator operator+(const float a) const {
			return { x + a, y + a, z + a };
		}

		inline void operator+=(const float a) {
			x += a, y += a, z += a;
		}

		inline ue4::math::rotator operator-(const float a) const {
			return { x - a, y - a, z - a };
		}

		inline void operator-=(const float a) {
			x -= a, y -= a, z -= a;
		}

		inline ue4::math::rotator operator*(const float a) const {
			return { x * a, y * a, z * a };
		}

		inline void operator*=(const float a) {
			x *= a, y *= a, z *= a;
		}

		inline ue4::math::rotator operator/(const float a) const {
			return { x / a, y / a, z / a };
		}

		inline void operator/=(const float a) {
			x /= a, y /= a, z /= a;
		}
	};
}