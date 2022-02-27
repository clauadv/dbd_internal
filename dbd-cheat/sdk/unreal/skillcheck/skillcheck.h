#pragma once

namespace sdk {
	struct u_skillcheck : sdk::u_object {
		bool is_displayed();
		void on_input();
	};
}