#pragma once

namespace variables::menu {
	inline bool opened = true;
}

namespace variables::survivor {
	inline bool name = false;
	inline float name_color[4]{ 1.f, 1.f, 1.f, 1.f };
	inline bool distance = false;
	inline bool skeleton = false;
	inline float skeleton_color[4]{ 1.f, 1.f, 1.f, 1.f };
	inline bool snapline = false;
	inline float snapline_color[4]{ 1.f, 1.f, 1.f, 1.f };
}

namespace variables::killer {
	inline bool name = false;
	inline float name_color[4]{ 1.f, 0.f, 0.f, 1.f };
	inline bool distance = false;
	inline bool skeleton = false;
	inline float skeleton_color[4]{ 1.f, 1.f, 1.f, 1.f };
	inline bool snapline = false;
	inline float snapline_color[4]{ 1.f, 0.f, 0.f, 1.f };
}

namespace variables::entities {
	inline float max_distance = 30.f;

	inline bool generator = false;
	inline float generator_color[4] = { 0.2f, 0.5f, 0.9f, 1.f };

	inline bool pallet = false;
	inline float pallet_color[4] = { 0.2f, 0.5f, 0.9f, 1.f };

	inline bool chest = false;
	inline float chest_color[4] = { 0.2f, 0.5f, 0.9f, 1.f };

	inline bool door = false;
	inline float door_color[4] = { 0.2f, 0.5f, 0.9f, 1.f };

	inline bool window = false;
	inline float window_color[4] = { 0.2f, 0.5f, 0.9f, 1.f };

	inline bool totem = false;
	inline float totem_color[4] = { 0.2f, 0.5f, 0.9f, 1.f };

	inline bool hatch = false;
	inline float hatch_color[4] = { 0.2f, 0.5f, 0.9f, 1.f };

	inline bool trap = false;
	inline float trap_color[4] = { 0.2f, 0.5f, 0.9f, 1.f };
}

namespace variables::misc {
	inline bool fov_changer = false;
	inline bool auto_skillcheck = false;
	inline bool trap_immunity = false;
	inline bool fly = false;
	inline float fly_speed = 30.f;
	inline int fly_key = 0;
	inline bool immobilize = false;
	inline int immobilize_type = 0;
	inline int immobilize_key = 0;
	inline bool escape = false;
	inline int escape_key = 0;
	inline bool role = false;
	inline int role_type = 0;
	inline int role_key = 0;
}