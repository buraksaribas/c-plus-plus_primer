#include <iostream>

int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl; // 32
	std::cout << u - u2 << std::endl; // 4294967264 = -32 + 4294967296 
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl; // 32
	std::cout << i - i2 << std::endl; // -32
	std::cout << i - u << std::endl;  // 0
	std::cout << u - i << std::endl;  // 0
	int i3 = -10;
	std::cout << i3 + u << std::endl;  // 0
	std::cout << i3 - u << std::endl;  // 4294967276
	
	return 0;
}