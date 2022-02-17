#pragma once

namespace utils {
	std::uintptr_t pattern_scan(std::uintptr_t address, const char* signature, bool relative = false);
}

namespace utils::console {
	bool initialize(const std::string& title);
	bool release();
}