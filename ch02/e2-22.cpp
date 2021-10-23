#include <iostream>

int main() 
{
	int i = 0;
	int *p = &i;
	
	if(p)
		std::cout << "p";
	if(*p)
		std::cout << "*p";

	return 0;
}