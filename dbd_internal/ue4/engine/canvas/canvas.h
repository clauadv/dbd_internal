#pragma once

namespace ue4::engine {
	class u_canvas : public ue4::core_object::u_object {
	public:
		void draw_box(const ue4::math::vector_2d& screen, const ue4::math::vector_2d& size, float thickness, const ue4::math::color& color);
		void draw_line(ue4::math::vector_2d screen_a, ue4::math::vector_2d screen_b, float thickness, ue4::math::color color);
		void draw_text(ue4::containers::f_string text, ue4::math::vector_2d screen, ue4::math::vector_2d scale, ue4::math::color color, float kerning, ue4::math::color shadow_color, ue4::math::vector_2d shadow_offset, bool center_x, bool center_y, bool outlined, ue4::math::color outline_color);
		void draw_polygon(class u_texture* texture, const ue4::math::vector_2d& screen, const ue4::math::vector_2d& radius, int side_number, const ue4::math::color& color);
		ue4::math::vector_2d text_size(const ue4::containers::f_string& text, const ue4::math::vector_2d& scale);
	};
}