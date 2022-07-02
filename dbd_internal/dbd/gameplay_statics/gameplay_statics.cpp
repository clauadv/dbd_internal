#include <includes.h>

float dbd::gameplay_statics::u_gameplay_statics::get_delta_time() {
	struct {
		ue4::core_object::u_object* object;
		float return_value;
	} params{};

	params.object = this;

	const auto flags = ue4::sdk::get_delta_time->flags;
	ue4::sdk::get_delta_time->flags |= 0x00000400;

	ue4::sdk::process_event(this, ue4::sdk::get_delta_time, &params);
	ue4::sdk::get_delta_time->flags = flags;

	return params.return_value;
}