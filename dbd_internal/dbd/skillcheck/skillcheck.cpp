#include <includes.h>

bool dbd::skillcheck::u_skillcheck::is_displayed() {
	struct {
		bool return_value;
	} params{};

	ue4::sdk::process_event(this, ue4::sdk::is_displayed, &params);

	return params.return_value;
}

void dbd::skillcheck::u_skillcheck::on_input() {
	const auto flags = ue4::sdk::on_input->flags;
	ue4::sdk::on_input->flags |= 0x00000400;

	ue4::sdk::process_event(this, ue4::sdk::on_input, nullptr);
	ue4::sdk::on_input->flags = flags;
}