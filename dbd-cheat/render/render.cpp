#include <pch.h>
#include "render.h"

void render::text(const float x, const float y, const sdk::u_string text, const sdk::color color) {
	if (canvas) {
		canvas->draw_text(text, { x, y }, { 1.f, 1.f }, { color.r / 255.f, color.g / 255.f, color.b / 255.f, color.a / 255.f }, 1.f, sdk::color(), sdk::vector_2d(), true, false, true, { 0, 0, 0, 1.f });
	}
}

void render::circle(const float x, const float y, const float radius, const sdk::color color) {
	if (canvas) {
		constexpr float step = 3.14f / 16;

		for (auto i = 0.f; i < 2.f * 3.14f; i += step) {
			const sdk::vector_2d from{ x + std::cosf(i - step) * radius, y + std::sinf(i - step) * radius };
			const sdk::vector_2d to{ x + std::cosf(i) * radius, y + std::sinf(i) * radius };

			render::line(from.x, from.y, to.x, to.y, 1.f, color);
		}
	}
}

void render::filled_circle(const float x, const float y, const float radius, const sdk::color color) {
	if (canvas) {
		canvas->draw_polygon(nullptr, { x, y }, { radius, radius }, 32, { color.r / 255.f, color.g / 255.f, color.b / 255.f, color.a / 255.f });
	}
}

void render::line(const float x1, const float y1, const float x2, const float y2, const float thickness, const sdk::color color) {
	if (canvas) {
		canvas->draw_line({ x1, y1 }, { x2, y2 }, thickness, { color.r / 255.f, color.g / 255.f, color.b / 255.f, color.a / 255.f });
	}
}

void render::cornered_box(const float x, const float y, const float w, const float h, const float thickness, const sdk::color color) {
	if (canvas) {
		render::line(x, y, x, y + (h / 5), thickness, color);
		render::line(x, y, x + (w / 5), y, thickness, color);
		render::line(x + w, y, x + w - (w / 5), y, thickness, color);
		render::line(x + w, y, x + w, y + (h / 5), thickness, color);
		render::line(x, y + h, x + (w / 5), y + h, thickness, color);
		render::line(x, y + h, x, y + h - (h / 5), thickness, color);
		render::line(x + w, y + h, x + w - (w / 5), y + h, thickness, color);
		render::line(x + w, y + h, x + w, y + h - (h / 5), thickness, color);
	}
}

sdk::vector_2d render::text_size(const sdk::u_string text) {
	if (canvas) {
		const auto text_size = canvas->text_size(text, { 1.f, 1.f });
		return { text_size.x, text_size.y };
	}

	return { 0, 0 };
}