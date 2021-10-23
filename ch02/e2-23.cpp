#include <iostream>

int main() 
{
	int i = 0;
	int *p = &i;
	void *p2 = &i;
	double *p3 = &i; //err
	
	if(p)
		std::cout << "p";
	if(*p)
		std::cout << "*p";
	if(*p2)
		std::cout << "*p2";
	if(*p3)
		std::cout << "*p3";

	return 0;
}