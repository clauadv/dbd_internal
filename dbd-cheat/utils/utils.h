#pragma once
#include <Windows.h>
#include <vector>
#include <winnt.h>

namespace utils {
	inline std::uintptr_t pattern_scan(std::uintptr_t moduleAdress, const char* signature) {
		static auto patternToByte = [](const char* pattern) {
			auto bytes = std::vector<int>{};
			const auto start = const_cast<char*>(pattern);
			const auto end = const_cast<char*>(pattern) + strlen(pattern);

			for (auto current = start; current < end; ++current) {
				if (*current == '?') {
					++current;
					bytes.push_back(-1);
				} else { bytes.push_back(strtoul(current, &current, 16)); }
			}
			return bytes;
		};

		const auto dosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(moduleAdress);
		const auto ntHeaders = reinterpret_cast<PIMAGE_NT_HEADERS>(reinterpret_cast<std::uint8_t*>(moduleAdress) + dosHeader->e_lfanew);

		const auto sizeOfImage = ntHeaders->OptionalHeader.SizeOfImage;
		const auto patternBytes = patternToByte(signature);
		const auto scanBytes = reinterpret_cast<std::uint8_t*>(moduleAdress);

		const auto s = patternBytes.size();
		const auto d = patternBytes.data();

		for (auto i = 0ul; i < sizeOfImage - s; ++i) {
			bool found = true;
			for (auto j = 0ul; j < s; ++j) {
				if (scanBytes[i + j] != d[j] && d[j] != -1) {
					found = false;
					break;
				}
			}

			if (found) {
				const auto offset = *reinterpret_cast<int*>(&scanBytes[i] + 3);
				return reinterpret_cast<std::uintptr_t>(&scanBytes[i]) + offset + 7;
			}
		}
		return NULL;
	}
}