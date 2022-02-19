#include <pch.h>

bool sdk::a_escape_door::is_escape_door() const {
	const auto name = this->get_name();

	if (name.contains("BP_EscapeBlocker")) {
		return true;
	}

	return false;
}