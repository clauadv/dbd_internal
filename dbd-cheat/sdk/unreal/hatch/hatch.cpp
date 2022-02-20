#include <pch.h>

bool sdk::a_hatch::is_hatch() const {
	const auto name = this->get_name();

	if (name.contains("BP_Hatch01")) {
		return true;
	}

	return false;
}