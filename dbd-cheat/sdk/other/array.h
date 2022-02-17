#pragma once
#include <cstdint>

namespace sdk {
	struct u_string;

	template<class T>
	struct u_array {
		friend struct u_string;

		T& operator[](int i) {
			return data[i];
		}

		int size() const {
			return count;
		}

		bool is_valid(const int i) const {
			return i < size();
		}

	private:
		T* data;
		std::int32_t count;
		std::int32_t max;
	};
}