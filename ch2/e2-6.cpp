#include <iostream>

int main()
{
	int month = 9, day = 7; // ok
	std::cout << month << " " << day << std::endl;
	month = 09; // error: the digit of octal lintegral literal should in range 0-7
	day = 07;
	std::cout << month << " " << day << std::endl;
	
	return 0;
}