#pragma once

namespace sdk {
	struct u_object;
	struct u_object_array;

	inline std::uintptr_t get_bone_matrix;
	inline std::uintptr_t unlock_all;

	inline u_object* font;

	// canvas
	inline u_object* draw_box;
	inline u_object* draw_line;
	inline u_object* draw_text;
	inline u_object* draw_polygon;
	inline u_object* text_size;

	// player_controller
	inline u_object* world_to_screen;

	// player_state
	inline u_object* get_dbd_player_state;
	inline u_object* get_player_state;

	// skinned_mesh_component
	inline u_object* get_bone_name;

	// actor
	inline u_object* get_actor_location;
	inline u_object* get_actor_rotation;
	inline u_object* get_actor_bounds;
	inline u_object* get_distance_to;

	// pawn
	inline u_object* launch_character;

	// window
	inline u_object* is_window_blocked_for;

	// skillcheck
	inline u_object* get_player_interaction;
	inline u_object* is_displayed;
	inline u_object* skillcheck_input;

	// camper_player
	inline u_object* trap_immunity;
	inline u_object* is_carried;

	bool initialize();
	void process_event(void* object, void* u_function, void* params);
}