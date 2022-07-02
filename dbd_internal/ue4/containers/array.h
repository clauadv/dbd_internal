#pragma once

namespace ue4::containers {
	template<class T>
	class t_array {
		friend class f_string;
	public:
		T* data;

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
		std::int32_t count;
		std::int32_t max;
	};
}