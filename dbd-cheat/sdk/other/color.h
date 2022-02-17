#pragma once

namespace sdk {
	struct color {
		float r, g, b, a;

		color() : r{ 0.f }, g{ 0.f }, b{ 0.f }, a{ 0.f } { }
		color(const float r, const float g, const float b, const float a) : r{ r }, g{ g }, b{ b }, a{ a } { }
	};
}