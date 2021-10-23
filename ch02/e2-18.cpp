#include <iostream>

int main() 
{
	int i = 30;
	int *p = &i;
	std::cout << i << std::endl; // 30
	*p = 10;
	std::cout << i << " " << *p << std::endl; // 10 10
	i = 5;
	std::cout << i << " " << *p << std::endl; // 5 5
	

 	return 0;
}