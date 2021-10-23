#include <iostream>

int main()
{
	int i = 10;
	int &ri = i;
	int *p = &i;
	
	std::cout << *p + *p << std::endl;
	std::cout << ri + ri << std::endl;
	
	i = 20;
	std::cout << *p + *p << std::endl;
	std::cout << ri + ri << std::endl;
	
	ri = 30;
	std::cout << *p + *p << std::endl;
	std::cout << ri + ri << std::endl;
	
	*p = 40;
	std::cout << *p + *p << std::endl;
	std::cout << ri + ri << std::endl;

	return 0;
}