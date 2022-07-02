#include <includes.h>

void render::text(const ue4::math::vector_2d position, const ue4::containers::f_string text, const ue4::math::color color) {
	if (canvas) {
		canvas->draw_text(text, position, { 1.f, 1.f }, color, 1.f, ue4::math::color(), ue4::math::vector_2d(), true, false, true, { 0.f, 0.f, 0.f, 1.f });
	}
}

void render::circle(const ue4::math::vector_2d position, const float radius, const ue4::math::color color) {
	if (canvas) {
		constexpr float step = 3.14f / 16;

		for (auto i = 0.f; i < 2.f * 3.14f; i += step) {
			const ue4::math::vector_2d from{ position.x + std::cosf(i - step) * radius, position.y + std::sinf(i - step) * radius };
			const ue4::math::vector_2d to{ position.x + std::cosf(i) * radius, position.y + std::sinf(i) * radius };

			render::line(from, to, 1.f, color);
		}
	}
}

void render::filled_circle(const ue4::math::vector_2d position, const float radius, const ue4::math::color color) {
	if (canvas) {
		canvas->draw_polygon(nullptr, position, { radius, radius }, 32, color);
	}
}

void render::line(const ue4::math::vector_2d position_1, const ue4::math::vector_2d position_2, const float thickness, const ue4::math::color color) {
	if (canvas) {
		canvas->draw_line(position_1, position_2, thickness, color);
	}
}

ue4::math::vector_2d render::text_size(const ue4::containers::f_string text) {
	if (canvas) {
		const auto text_size = canvas->text_size(text, { 1.f, 1.f });
		return { text_size.x, text_size.y };
	}

	return { 0, 0 };
}