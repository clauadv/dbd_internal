#pragma once

namespace dbd::gameplay_statics {
	class u_gameplay_statics : public ue4::core_object::u_object {
	public:
		float get_delta_time();
	};
}