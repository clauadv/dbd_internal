#pragma once

namespace sdk {
	struct u_field;

	struct u_struct : sdk::u_field {
		char pad_0001[0x18]; // 0x30(0x18)
		sdk::u_struct* super_struct; // 0x48(0x8)
		char pad_0002[0x68]; // 0x48(0x80)
	};
}