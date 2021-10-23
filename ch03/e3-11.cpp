#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    const string s = "Keep out!";
    
    for(auto &c : s)
    {
        if(!ispunct(c))
            cout << c;
    }
    cout << endl;
    return 0;
}