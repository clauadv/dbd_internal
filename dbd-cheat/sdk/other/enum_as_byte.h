#pragma once

namespace sdk {
	template<class t_enum>
	struct t_enum_as_byte {
		t_enum_as_byte() {}
		t_enum_as_byte(t_enum _value) : value(static_cast<std::uint8_t>(_value)) {}
		explicit t_enum_as_byte(const std::int32_t _value) : value(static_cast<std::uint8_t>(_value)) {}
		explicit t_enum_as_byte(const std::uint8_t _value) : value(_value) {}

		operator t_enum() const {
			return static_cast<t_enum>(value);
		}

		t_enum get_value() const {
			return static_cast<t_enum>(value);
		}

		private:
		std::uint8_t value;
	};
}