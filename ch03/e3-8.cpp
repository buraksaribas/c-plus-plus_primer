#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s("Asdfgh");
    for(auto &c : s)
        c = 'X';
    cout << s << endl;
    decltype(s.size()) i = 0;

    while(i < s.size())
        s[i++] = 'X';
    cout << s << endl;
    for ( i = 0; i < s.size(); i++)
        s[i] = 'X';
    cout << s << endl;
    return 0;
}