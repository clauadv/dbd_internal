#include <includes.h>

void ue4::engine::u_canvas::draw_box(const ue4::math::vector_2d& screen, const ue4::math::vector_2d& size, const float thickness, const ue4::math::color& color) {
	struct {
		ue4::math::vector_2d screen{};
		ue4::math::vector_2d size{};
		float thickness{};
		ue4::math::color color{};
	} params;

	params.screen = screen;
	params.size = size;
	params.thickness = thickness;
	params.color = color;

	const auto flags = ue4::sdk::draw_box->flags;
	ue4::sdk::draw_box->flags |= 0x00000400;

	ue4::sdk::process_event(this, ue4::sdk::draw_box, &params);
	ue4::sdk::draw_box->flags = flags;
}

void ue4::engine::u_canvas::draw_line(const ue4::math::vector_2d screen_a, const ue4::math::vector_2d screen_b, const float thickness, const ue4::math::color color) {
	struct {
		ue4::math::vector_2d screen_a{};
		ue4::math::vector_2d screen_b{};
		float thickness{};
		ue4::math::color color{};
	} params{};

	params.screen_a = screen_a;
	params.screen_b = screen_b;
	params.thickness = thickness;
	params.color = color;

	ue4::sdk::process_event(this, ue4::sdk::draw_line, &params);
}

void ue4::engine::u_canvas::draw_text(const ue4::containers::f_string text, const ue4::math::vector_2d screen, const ue4::math::vector_2d scale, const ue4::math::color color, const float kerning, const ue4::math::color shadow_color, const ue4::math::vector_2d shadow_offset, const bool center_x, const bool center_y, const bool outlined, const ue4::math::color outline_color) {
	struct {
		ue4::core_object::u_object* font{};
		ue4::containers::f_string text;
		ue4::math::vector_2d screen{};
		ue4::math::vector_2d scale{};
		ue4::math::color color{};
		float kerning{};
		ue4::math::color shadow_color{};
		ue4::math::vector_2d shadow_offset{};
		bool center_x{};
		bool center_y{};
		bool outlined{};
		ue4::math::color outline_color{};
	} params{};

	params.font = ue4::sdk::font;
	params.text = text;
	params.screen = screen;
	params.scale = scale;
	params.color = color;
	params.kerning = kerning;
	params.shadow_color = shadow_color;
	params.shadow_offset = shadow_offset;
	params.center_x = center_x;
	params.center_y = center_y;
	params.outlined = outlined;
	params.outline_color = outline_color;

	ue4::sdk::process_event(this, ue4::sdk::draw_text, &params);
}

void ue4::engine::u_canvas::draw_polygon(class u_texture* texture, const ue4::math::vector_2d& screen, const ue4::math::vector_2d& radius, const int side_number, const ue4::math::color& color) {
	struct {
		class u_texture* texture{};
		ue4::math::vector_2d screen{};
		ue4::math::vector_2d radius{};
		int side_number{};
		ue4::math::color color{};
	} params{};

	params.texture = texture;
	params.screen = screen;
	params.radius = radius;
	params.side_number = side_number;
	params.color = color;

	const auto flags = ue4::sdk::draw_polygon->flags;
	ue4::sdk::draw_polygon->flags |= 0x00000400;

	ue4::sdk::process_event(this, ue4::sdk::draw_polygon, &params);
	ue4::sdk::draw_polygon->flags = flags;
}

ue4::math::vector_2d ue4::engine::u_canvas::text_size(const ue4::containers::f_string& text, const ue4::math::vector_2d& scale) {
	struct {
		ue4::core_object::u_object* font;
		ue4::containers::f_string text;
		ue4::math::vector_2d scale;
		ue4::math::vector_2d return_value;
	} params{};

	params.font = ue4::sdk::font;
	params.text = text;
	params.scale = scale;

	const auto flags = ue4::sdk::text_size->flags;
	ue4::sdk::text_size->flags |= 0x00000400;

	ue4::sdk::process_event(this, ue4::sdk::text_size, &params);
	ue4::sdk::text_size->flags = flags;

	return params.return_value;
}