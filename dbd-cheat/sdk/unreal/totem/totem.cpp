#include <pch.h>

bool sdk::a_totem::is_totem() const {
	const auto name = this->get_name();

	if (name.contains("BP_TotemBase")) {
		return true;
	}

	return false;
}