#pragma once

namespace sdk {
	struct u_object;
	struct vector;
	struct rotator;
	struct color;
	struct vector_2d;
	struct u_string;

	struct u_canvas : sdk::u_object {
		void draw_box(const sdk::vector_2d& screen, const sdk::vector_2d& size, float thickness, const sdk::color& color);
		void draw_line(sdk::vector_2d screen_a, sdk::vector_2d screen_b, float thickness, sdk::color color);
		void draw_text(sdk::u_string text, sdk::vector_2d screen, sdk::vector_2d scale, sdk::color color, float kerning, sdk::color shadow_color, sdk::vector_2d shadow_offset, bool center_x, bool center_y, bool outlined, sdk::color outline_color);
		void draw_polygon(class u_texture* texture, const sdk::vector_2d& screen, const sdk::vector_2d& radius, int side_number, const sdk::color& color);
		sdk::vector_2d text_size(const sdk::u_string& text, const sdk::vector_2d& scale);
	};
}