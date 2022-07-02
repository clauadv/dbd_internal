#pragma once

namespace render {
	inline ue4::engine::u_canvas* canvas{};
	inline ue4::math::vector_2d screen{ 0.f, 0.f };

	void text(ue4::math::vector_2d position, ue4::containers::f_string text, ue4::math::color color);
	void circle(ue4::math::vector_2d position, float radius, ue4::math::color color);
	void filled_circle(ue4::math::vector_2d position, float radius, ue4::math::color color);
	void line(ue4::math::vector_2d position_1, ue4::math::vector_2d position_2, float thickness, ue4::math::color color);
	ue4::math::vector_2d text_size(ue4::containers::f_string text);
}