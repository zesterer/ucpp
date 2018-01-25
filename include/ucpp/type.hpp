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

// ucpp
#include "__ucpp/test.hpp"
#include "__impl/attr.hpp"

namespace ucpp
{
	using u8 = std::uint8_t;
	using u16 = std::uint16_t;
	using u32 = std::uint32_t;
	using u64 = std::uint64_t;

	using u8 = std::uint8_t;
	using u16 = std::uint16_t;
	using u32 = std::uint32_t;
	using u64 = std::uint64_t;

	template <typename T>
	struct __fw_data
	{
	private:
		T _item;

	public:
		__fw_data(T item) : _item(item) {}
		__fw_data<T>& operator=(T item) { this->_item = item; return *this; }

		operator T() { return this->_item; }
	} __ucpp_attr_packed;

	using __fw_data<std::uint8_t> = bits8;
	using __fw_data<std::uint16_t> = bits16;
	using __fw_data<std::uint32_t> = bits32;
	using __fw_data<std::uint64_t> = bits64;
}
