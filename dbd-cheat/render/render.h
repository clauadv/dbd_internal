#pragma once

namespace sdk {
	struct u_string;
	struct color;
	struct vector_2d;
	struct u_canvas;
}

namespace render {
	inline sdk::u_canvas* canvas;
	inline sdk::vector_2d screen{ 0.f, 0.f };

	void text(float x, float y, sdk::u_string text, sdk::color color);
	void circle(float x, float y, float radius, sdk::color color);
	void filled_circle(float x, float y, float radius, sdk::color color);
	void line(float x1, float y1, float x2, float y2, float thickness, sdk::color color);
	void cornered_box(float x, float y, float w, float h, float thickness, sdk::color color);
	sdk::vector_2d text_size(sdk::u_string text);
}