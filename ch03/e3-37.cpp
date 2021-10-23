#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector; using std::string; using std::cout; using std::endl; using std::cin; using std::begin; using std::end;

int main()
{
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while(*cp){
        cout << *cp << endl;
        ++cp;
    }
    // Since there is no null character at the end, 
    // the program will print all the characters in ca and continue print whatever
    //  in memeory until it find a null character.


	
		

    return 0;
}
