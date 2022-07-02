#pragma once

namespace dbd::skillcheck {
	class u_skillcheck : public ue4::core_object::u_object {
	public:
		bool is_displayed();
		void on_input();
	};
}