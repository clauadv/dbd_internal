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

	// window
	inline u_object* is_window_blocked_for;

	bool initialize();
	void process_event(void* object, void* u_function, void* params);
}