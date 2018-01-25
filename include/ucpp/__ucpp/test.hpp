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
|*| File: ucpp/__ucpp/test.hpp
|*|
|*| Check that the compiler provides support for ucpp features
|*/

#ifndef __cplusplus
	#error ucpp is a C++ library and must be compiled with a C++ compiler
#elif __cplusplus <= 199711L
	#error ucpp requires at least a C++11 compliant compiler
#endif

#ifndef __GNUC__
	#error ucpp currently only supports the GCC compiler
#endif
