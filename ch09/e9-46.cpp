#include <iostream>
#include <string>

using std::cout; 
using std::endl; 
using std::string;

string func(string name, const string &pre, const string &su)
{
    name.insert(0, pre);
    return name.insert(name.size(), su);
}

int main()
{
    string name("John");
    cout << func(name, "Mr.", ", Jr.") << endl;

    return 0;
}