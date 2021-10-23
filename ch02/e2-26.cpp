#include <iostream>

int main() {
	const int buf; // err
	int cnt = 0; // ok
	const int sn = cnt; // ok
	++cnt; //ok
	++sn; //err
	
	return 0;
}