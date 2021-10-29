#include <iostream>
#include <string>

using std::cout; 
using std::endl; 
using std::string;

string func(string name, const string &pre, const string &su)
{
    name.insert(name.begin(), pre.cbegin(), pre.cend());
    return name.append(su);
}

int main()
{
    string name("John");
    cout << func(name, "Mr.", ", Jr.") << endl;

    return 0;
}