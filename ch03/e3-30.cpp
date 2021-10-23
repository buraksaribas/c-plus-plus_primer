#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector; using std::string; using std::cout; using std::cin; using std::isalpha;

int main()
{
	constexpr size_t array_size = 10;
	int ia[array_size];
	//for(size_t ix = 1; ix <= array_size; ++ix)
	for(size_t ix = 0; ix < array_size; ++ix)
		ia[ix] = ix;

    return 0;
}
