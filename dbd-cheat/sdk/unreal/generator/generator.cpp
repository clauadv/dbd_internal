#include <pch.h>

bool sdk::a_generator::is_generator() const {
	const auto name = this->get_name();

	if (name.contains("GeneratorStandard") || name.contains("GeneratorNoPole") || name.contains("GeneratorShort")) {
		return true;
	}

	return false;
}

std::wstring sdk::a_generator::get_repair_percent() const {
	const auto to_string = std::to_string(static_cast<int>(this->native_percent_complete * 100 - std::floor(this->native_percent_complete) * 100));
	std::wstring percent(to_string.begin(), to_string.end());

	return percent;
}