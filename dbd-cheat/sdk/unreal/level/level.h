#pragma once

namespace sdk {
	template<class T>
	struct u_array;
	struct a_actor;

	struct u_level {
		char pad_0001[0x9a]; // 0x00(0x9a)
		sdk::u_array<sdk::a_actor*> actors; // 0x9a(0x10)
	};
}