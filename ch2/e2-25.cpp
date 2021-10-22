#include <iostream>

int main() 
{
	{
	  int* ip, i, &r = i;  
      // `ip` is `int *`, `i` is `int`, `r` is `int &`
	}
	
	{
	  int i, *ip = 0;  
      // `i` is `int`, `ip` is `int *`
	}
	
	{
	  int* ip, ip2;  
      // `ip` is `int *`, `ip2` is `int`
	}
	
  	return 0;
}