#include <iostream>
#include <vector>
#include <string>

using std::vector; 
using std::cout; 
using std::endl; 
using std::string;

int main()
{
    vector<char> v{ 'a', 'b', 'c', 'd' };
    string str(v.cbegin(), v.cend());
    cout << str << endl;

    return 0;
}