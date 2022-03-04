#include <pch.h>
#include "../features.h"
#include "hooks/hooks.h"

void visuals::watermark::draw() {
	const auto draw_list = ImGui::GetBackgroundDrawList();

	const auto fps = static_cast<int>(1.f / hooks::delta_time);
	const auto latency = survivor::latency;

	std::string text;
	text.append("dbd-cheat | fps: ").append(std::to_string(fps)).append(" | latency: ").append(std::to_string(latency)).append("ms");

	const auto text_size = ImGui::CalcTextSize(text.c_str());

	const auto x = render::screen.x - text_size.x - 20.f;
	constexpr auto y = 10.f;
	const auto w = text_size.x + 10.f;
	const auto h = text_size.y + 3.f;

	draw_list->AddRectFilled({ x, y }, { x + w, y + h }, ImColor{ 41, 74, 122, 200 }, 3.f);
	draw_list->AddText({ x + 5.f, y + 1.f }, ImColor(255, 255, 255, 255), text.c_str());
}