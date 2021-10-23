#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::vector; using std::string; using std::cout; 
using std::endl; using std::cin; using std::begin; using std::end;

int main()
{
	string s1("Hebele");
    string s2("Hubele");
    if(s1 == s2)
        cout << "equal";
    else if(s1 > s2)
        cout << "not equal s1 > s2";
    else    
        cout << "not equal s1 < s2";

    char c1[20] = "Hebele";
    char c2[20] = "Hubele";

    if(!strcmp(c1,c2))
        cout << "equal";
    else if(strcmp(c1,c2) < 0)
        cout << "not equal s1 < s2";
    else
        cout << "not equal s1 > s2";

    return 0;
}
