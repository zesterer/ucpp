// ucpp
#include <ucpp/type.hpp>

// Standard
#include <iostream>

using namespace ucpp;

int main()
{
	u8 a = 4, b = 7; // Unsigned 8-bit integers

	b8 c = 5;

	std::cout << (a * b) << ", " << (int)c << std::endl;

	return 0;
}
