#pragma once
#include <locale>
#include <string>

#include "array.h"

namespace sdk {
	struct u_string : private u_array<wchar_t> {
		u_string() = default;
		u_string(const wchar_t* other) {
			max = count = *other ? std::wcslen(other) + 1 : 0;

			if (count) {
				data = const_cast<wchar_t*>(other);
			}
		}

		bool is_valid() const {
			return data != nullptr;
		}

		const wchar_t* c_str() const {
			return data;
		}

		std::string to_string() const {
			const auto length = std::wcslen(data);

			std::string str(length, '\0');
			std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(data, data + length, '?', &str[0]);

			return str;
		}
	};
}
