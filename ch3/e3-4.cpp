#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

void checkEqual()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if(s1 > s2)
        cout << "s1 is greater than s2" << endl;
    else if(s2 > s1)
        cout << "s2 is greater than s1" << endl;
    else
        cout << "s1 is equal s2" << endl;
}

void checkLength()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if(s1.size() > s2.size())
        cout << "s1 is longer than s2" << endl;
    else if(s2.size() > s1.size())
        cout << "s2 is longer than s1" << endl;
    else
        cout << "s1 is equal s2" << endl;
}

int main()
{
    //checkEqual();
    checkLength();

    return 0;
}