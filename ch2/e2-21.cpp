#include <iostream>

int main() 
{
	int i = 0;
	double *dp = &i; // er
  	int *ip = i; // er
  	int *ip = &i;	//ok
  	

	return 0;
}