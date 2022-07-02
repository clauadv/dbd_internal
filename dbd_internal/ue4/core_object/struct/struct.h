#pragma once

namespace ue4::core_object {
	class u_struct : public ue4::core_object::u_field {
	public:
		char pad_0001[0x10]; // 0x38(0x10)
		ue4::core_object::u_struct* super_struct; // 0x48(0x8)
		char pad_0002[0x68]; // 0x48(0x68)
	};
}