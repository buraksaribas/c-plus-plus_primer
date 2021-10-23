#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector; using std::string; using std::cout; using std::cin; using std::isalpha;

int txt_size()
{
	return 3;
}

int main()
{
	unsigned buf_size = 1024;
    
    int ia[buf_size];   // illegal, The dimension value must be a constant expression.
    int ia[4 * 7 - 14]; // legal
    int ia[txt_size()]; // illegal, The dimension value must be a constant expression.
    char st[11] = "fundamental";  // illegal, the string's size is 12.

    return 0;
}
