#include <pch.h>
#include "../features.h"

void misc::auto_skillcheck::run(sdk::a_camper_player* my_camper) {
	if (my_camper->is_carried()) {
		return;
	}

	const auto interaction_handler = my_camper->get_player_interaction();
	if (!interaction_handler) return;

	const auto skillcheck = interaction_handler->skillcheck;
	if (!skillcheck) return;

	// https://www.unknowncheats.me/forum/3308610-post950.html
	const auto current_progress = *reinterpret_cast<float*>(reinterpret_cast<std::uintptr_t>(skillcheck) + 0x14c);
	const auto success_zone = *reinterpret_cast<float*>(reinterpret_cast<std::uintptr_t>(skillcheck) + 0x190);

	if (skillcheck->is_displayed() && current_progress > success_zone) {
		skillcheck->on_input();
	}
}