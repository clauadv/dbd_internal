#include <pch.h>

bool sdk::a_chest::is_chest() const {
	const auto name = this->get_name();

	if (name.contains("BP_Chest")) {
		return true;
	}

	return false;
}