/*|
|*| Copyright (C) 2018  Joshua Barretto <joshua.s.barretto@gmail.com>
|*|
|*| This program is free software: you can redistribute it and/or modify
|*| it under the terms of the GNU General Public License as published by
|*| the Free Software Foundation, either version 3 of the License, or
|*| (at your option) any later version.
|*|
|*| This program is distributed in the hope that it will be useful,
|*| but WITHOUT ANY WARRANTY; without even the implied warranty of
|*| MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
|*| GNU General Public License for more details.
|*|
|*| You should have received a copy of the GNU General Public License
|*| along with this program.  If not, see <http://www.gnu.org/licenses/>.
|*/

/*|
|*| File: ucpp/type.hpp
|*|
|*| Fixed-width types, utility types, etc.
|*/

// Compiler
#include <cstddef>
#include <cstdint>

// ucpp
#include "__ucpp/test.hpp"
#include "__impl/attr.hpp"

namespace ucpp
{
	using u8 = std::uint8_t;
	using u16 = std::uint16_t;
	using u32 = std::uint32_t;
	using u64 = std::uint64_t;

	using i8 = std::int8_t;
	using i16 = std::int16_t;
	using i32 = std::int32_t;
	using i64 = std::int64_t;

	template <typename T>
	struct __bits_gen
	{
	private:
		using self = __bits_gen<T>;
		T _item;

	public:
		__bits_gen(T item) : _item(item) {}
		self& operator=(T item) { this->_item = item; return *this; }

		// Unary operators
		constexpr self operator~() const noexcept { return self(~this->_item); }

		// Binary operators
		constexpr self operator&(self other) const noexcept { return self(this->_item & other._item); }
		constexpr self operator|(self other) const noexcept { return self(this->_item | other._item); }
		constexpr self operator^(self other) const noexcept { return self(this->_item ^ other._item); }

		operator T() { return this->_item; }
	} __ucpp_attr_packed;

	using b8 = __bits_gen<std::uint8_t>;
	using b16 = __bits_gen<std::uint16_t>;
	using b32 = __bits_gen<std::uint32_t>;
	using b64 = __bits_gen<std::uint64_t>;
}
