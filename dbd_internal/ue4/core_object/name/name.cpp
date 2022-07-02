#include <includes.h>

std::string ue4::core_object::u_name_entry::string() const {
	if (is_wide) {
		return std::string{};
	}

	return { ansi_name, len };
}

ue4::core_object::u_name_entry* ue4::core_object::u_name_pool::get_entry(const ue4::core_object::u_name_entry_handle handle) const {
	return reinterpret_cast<ue4::core_object::u_name_entry*>(blocks[handle.block] + stride * static_cast<std::uint64_t>(handle.offset));
}

std::string ue4::core_object::u_name::get_name() const {
	const auto entry = ue4::core_object::names->get_entry(index);

	auto name = entry->string();
	if (number > 0) {
		name += '_' + std::to_string(number);
	}

	const auto pos = name.rfind('/');
	if (pos != std::string::npos) {
		name = name.substr(pos + 1);
	}

	return name;
}