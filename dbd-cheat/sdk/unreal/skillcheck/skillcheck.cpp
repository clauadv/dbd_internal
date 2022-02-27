#include <pch.h>

bool sdk::u_skillcheck::is_displayed() {
	struct {
		bool return_value;
	} params{};

	const auto flags = sdk::is_displayed->flags;
	sdk::is_displayed->flags |= 0x00000400;

	sdk::process_event(this, sdk::is_displayed, &params);
	sdk::is_displayed->flags = flags;

	return params.return_value;
}

void sdk::u_skillcheck::on_input() {
	const auto flags = sdk::skillcheck_input->flags;
	sdk::skillcheck_input->flags |= 0x00000400;

	sdk::process_event(this, sdk::skillcheck_input, nullptr);
	sdk::skillcheck_input->flags = flags;
}