#pragma once

namespace sdk {
	struct a_window : sdk::a_actor {
		bool is_window() const;
		bool is_window_blocked_for(sdk::a_camper_player* camper);
	};
}