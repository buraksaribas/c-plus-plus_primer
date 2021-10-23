#include <iostream>

int main() 
{
	int i = 42;
	void *p = &i;
	long *p2 = &i;
	
	if(p)
		std::cout << "p";
	if(*p)
		std::cout << "*p";

	return 0;
}