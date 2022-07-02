#include <includes.h>

std::string ue4::core_object::u_object::get_name() const {
	return name.get_name();
}

std::string ue4::core_object::u_object::get_full_name() const {
	std::string name;
	for (auto _outer = outer; _outer; _outer = _outer->outer) {
		name = _outer->get_name() + "." + name;
	}

	name = _class->get_name() + " " + name + this->get_name();
	return name;
}

bool ue4::core_object::u_object::is_a(void* cmp) const {
	for (auto super = _class; super; super = reinterpret_cast<ue4::core_object::u_class*>(super->super_struct)) {
		if (super == cmp) {
			return true;
		}
	}

	return false;
}

ue4::core_object::u_object* ue4::core_object::object_array::find(const char* name) const {
	for (auto i = 0u; i < num_elements; i++) {
		const auto object = get(i);
		if (object && object->get_full_name() == name) {
			return object;
		}
	}

	return nullptr;
}

ue4::core_object::u_object* ue4::core_object::object_array::get(const std::uint32_t id) const {
	if (id >= num_elements) return nullptr;

	const std::uint64_t chunk_index = id / 65536;
	if (chunk_index >= num_chunks) return nullptr;

	const auto chunk = objects[chunk_index];
	if (!chunk) return nullptr;

	const std::uint32_t within_chhunk_index = id % 65536 * 24;
	const auto item = *reinterpret_cast<ue4::core_object::u_object**>(chunk + within_chhunk_index);

	return item;
}

void ue4::sdk::process_event(void* object, void* u_function, void* params) {
	const auto vtable = *static_cast<void***>(object);
	reinterpret_cast<void(*)(void*, void*, void*)>(vtable[0x44])(object, u_function, params);
}