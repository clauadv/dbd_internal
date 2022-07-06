#pragma once

namespace ue4::core_object {
	class u_object;
}

namespace ue4::sdk {
	inline std::uintptr_t unlock_items;
	inline std::uintptr_t set_fov;

	// u_canvas
	inline ue4::core_object::u_object* font;
	inline ue4::core_object::u_object* draw_box;
	inline ue4::core_object::u_object* draw_line;
	inline ue4::core_object::u_object* draw_text;
	inline ue4::core_object::u_object* draw_polygon;
	inline ue4::core_object::u_object* text_size;

	// a_player_controller
	inline ue4::core_object::u_object* world_to_screen;

	// a_actor
	inline ue4::core_object::u_object* get_actor_location;
	inline ue4::core_object::u_object* get_actor_rotation;
	inline ue4::core_object::u_object* get_actor_bounds;
	inline ue4::core_object::u_object* get_distance_to;
	inline ue4::core_object::u_object* enable_input;
	inline ue4::core_object::u_object* disable_input;

	// a_pawn
	inline ue4::core_object::u_object* launch_character;

	// a_player_camera_maanger
	inline ue4::core_object::u_object* get_camera_rotation;

	// u_skeletal_mesh_component
	inline std::uintptr_t bone_matrix;
	inline ue4::core_object::u_object* get_bone_name;
	inline ue4::core_object::u_object* get_bones_num;

	// a_dbd_player
	inline ue4::core_object::u_object* get_dbd_player_state;
	inline ue4::core_object::u_object* get_player_team;
	inline ue4::core_object::u_object* get_player_interaction;
	inline ue4::core_object::u_object* set_state;
	inline ue4::core_object::u_object* is_carried;
	inline ue4::core_object::u_object* trap_immunity;

	// a_dbd_game_state
	inline ue4::core_object::u_object* get_player_game_state;

	// u_gameplay_statics
	inline ue4::core_object::u_object* get_delta_time;

	// u_skillcheck
	inline ue4::core_object::u_object* is_displayed;
	inline ue4::core_object::u_object* on_input;

	// a_generator
	inline ue4::core_object::u_object* generator;

	// a_searchable
	inline ue4::core_object::u_object* searchable;

	// a_escape_door
	inline ue4::core_object::u_object* escape_door;
	inline ue4::core_object::u_object* is_opened;

	// a_hatch
	inline ue4::core_object::u_object* hatch;

	// a_locker
	inline ue4::core_object::u_object* locker;

	// a_pallet
	inline ue4::core_object::u_object* pallet;

	// a_window
	inline ue4::core_object::u_object* window;
	inline ue4::core_object::u_object* is_window_blocked;

	// a_totem
	inline ue4::core_object::u_object* totem;

	// a_zombie
	inline ue4::core_object::u_object* zombie;

	bool initialize();

	void process_event(void* object, void* u_function, void* params);
}
