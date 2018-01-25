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
|*| File: ucpp/__impl/attr.hpp
|*|
|*| Provides compiler support for certain attributes
|*/

#ifdef __GNUC__
	#define __ucpp_attr_packed __attribute__((__packed__))
#else
	#error
#endif
