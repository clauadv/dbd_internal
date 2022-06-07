#include <pch.h>

std::string sdk::u_object::get_name() const {
	return name.get_name();
}

std::string sdk::u_object::get_full_name() const {
	std::string name;
	for (auto _outer = outer; _outer; _outer = _outer->outer) {
		name = _outer->get_name() + "." + name;
	}

	name = _class->get_name() + " " + name + this->get_name();
	return name;
}

bool sdk::u_object::is_a(void* cmp) const {
	for (auto super = _class; super; super = reinterpret_cast<sdk::u_class*>(super->super_struct)) {
		if (super == cmp) {
			return true;
		}
	}

	return false;
}

sdk::u_object* sdk::u_object_array::find_object(const char* name) const {
	for (auto i = 0u; i < num_elements; i++) {
		const auto object = get_object_ptr(i);
		if (object && object->get_full_name() == name) {
			return object;
		}
	}

	return nullptr;
}

sdk::u_object* sdk::u_object_array::get_object_ptr(const std::uint32_t id) const {
	if (id >= num_elements) return nullptr;
	const std::uint64_t chunk_index = id / 65536;
	if (chunk_index >= num_chunks) return nullptr;

	const auto chunk = objects[chunk_index];
	if (!chunk) return nullptr;

	const std::uint32_t within_chunk_index = id % 65536 * 24;
	const auto item = *reinterpret_cast<u_object**>(chunk + within_chunk_index);

	return item;
}

void sdk::process_event(void* object, void* u_function, void* params) {
	const auto vtable = *static_cast<void***>(object);
	reinterpret_cast<void(*)(void*, void*, void*)>(vtable[0x44])(object, u_function, params);
}