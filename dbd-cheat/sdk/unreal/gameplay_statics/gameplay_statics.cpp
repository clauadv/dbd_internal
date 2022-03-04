#include <pch.h>

float sdk::u_gameplay_statics::get_delta_time() {
	struct {
		sdk::u_object* object;
		float return_value;
	} params{};

	params.object = this;

	const auto flags = sdk::get_delta_time->flags;
	sdk::get_delta_time->flags |= 0x00000400;

	sdk::process_event(this, sdk::get_delta_time, &params);
	sdk::get_delta_time->flags = flags;

	return params.return_value;
}