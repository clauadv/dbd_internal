#pragma once

namespace ue4::engine {
	class u_player;

	class u_game_instance {
	public:
		char pad_0001[0x40]; // 0x00(0x40)
		ue4::containers::t_array<ue4::engine::u_player*> local_players; // 0x40(0x10)
	};
}