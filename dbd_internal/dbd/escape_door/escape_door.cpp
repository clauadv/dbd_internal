#include <includes.h>

bool dbd::escape_door::a_escape_door::is_opened() {
	struct {
		bool return_value;
	} params{};

	ue4::sdk::process_event(this, ue4::sdk::is_opened, &params);

	return params.return_value;
}