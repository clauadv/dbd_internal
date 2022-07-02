#pragma once

namespace ue4::containers {
	template<class T>
	class t_enum_as_byte {
	public:
		t_enum_as_byte() {}
		t_enum_as_byte(T _value) : value(static_cast<std::uint8_t>(_value)) {}
		explicit t_enum_as_byte(const std::int32_t _value) : value(static_cast<std::uint8_t>(_value)) {}
		explicit t_enum_as_byte(const std::uint8_t _value) : value(_value) {}

		operator T() const {
			return static_cast<T>(value);
		}

		T get_value() const {
			return static_cast<T>(value);
		}

	private:
		std::uint8_t value;
	};
}