#include <includes.h>

std::wstring dbd::generator::a_generator::get_repair_percent() {
	const auto to_string = std::to_string(static_cast<int>(this->percent_complete * 100 - std::floor(this->percent_complete) * 100));
	std::wstring percent(to_string.begin(), to_string.end());

	return percent;
}