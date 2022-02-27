#include <pch.h>

bool sdk::a_bear_trap::is_bear_trap() const {
	const auto name = this->get_name();

	if (name.contains("BP_BearTrap")) {
		return true;
	}

	return false;
}