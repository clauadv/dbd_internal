#include <pch.h>

bool sdk::a_window::is_window() const {
	const auto name = this->get_name();

	if (name.contains("WindowStandard")) {
		return true;
	}

	return false;
}

bool sdk::a_window::is_window_blocked_for(sdk::a_camper_player* camper) {
	struct {
		sdk::a_camper_player* camper;
		bool return_value;
	} params{};

	params.camper = camper;

	const auto flags = sdk::is_window_blocked_for->flags;
	sdk::is_window_blocked_for->flags |= 0x00000400;

	sdk::process_event(this, sdk::is_window_blocked_for, &params);
	sdk::is_window_blocked_for->flags = flags;

	return params.return_value;
}