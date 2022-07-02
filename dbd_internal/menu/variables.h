#pragma once

namespace variables::menu {
	inline bool opened{ true };
}

namespace variables::players {
	inline bool name{ false };
	inline bool skeleton{ false };
	inline bool snapline{ false };

	inline float survivor_color[4]{ 1.f, 1.f, 1.f, 1.f };
	inline float killer_color[4]{ 1.f, 0.f, 0.f, 1.f };
}

namespace variables::entities {
	inline bool generator{ false };
	inline float generator_color[4]{0.2f, 0.5f, 0.9f, 1.f};

	inline bool searchable{ false };
	inline float searchable_color[4]{ 0.2f, 0.5f, 0.9f, 1.f };

	inline bool escape_door{ false };
	inline float escape_door_color[4]{ 0.2f, 0.5f, 0.9f, 1.f };

	inline bool hatch{ false };
	inline float hatch_color[4]{ 0.2f, 0.5f, 0.9f, 1.f };

	inline bool locker{ false };
	inline float locker_color[4]{ 0.2f, 0.5f, 0.9f, 1.f };

	inline bool pallet{ false };
	inline float pallet_color[4]{ 0.2f, 0.5f, 0.9f, 1.f };

	inline bool window{ false };
	inline float window_color[4]{ 0.2f, 0.5f, 0.9f, 1.f };

	inline bool totem{ false };
	inline float totem_color[4]{ 0.2f, 0.5f, 0.9f, 1.f };

	inline bool zombie{ false };
	inline float zombie_color[4]{ 0.2f, 0.5f, 0.9f, 1.f };

	inline float max_distance{ 30.f };
}

namespace variables::misc {
	inline bool auto_skillcheck{ false };

	inline bool fov_changer{ false };
	inline float fov_value{ 90.f };

	inline bool speed_hack{ false };
	inline float speed{ 30.f };
	inline int speed_key = 0;

	inline bool state{ false };
	inline int state_type{ 0 };
	inline int state_key{ 0 };

	inline bool trap_immunity{ false };
}