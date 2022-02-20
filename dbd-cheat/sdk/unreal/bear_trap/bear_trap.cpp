#include <pch.h>

bool sdk::a_bear_trap::is_bear_trap() const {
	const auto name = this->get_name();

	// BearTrap_C -> traps that are on the ground
	// BP_BearTrap -> traps that are set

	if (name.contains("BP_BearTrap")) {
		return true;
	}

	return false;
}