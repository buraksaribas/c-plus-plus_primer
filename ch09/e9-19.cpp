#include <iostream>
#include <iterator>
#include <list>

using namespace std;

int main()
{
    list<string> li;

    string str;
    while(getline(cin, str))
    {
        li.push_back(str);
    }

    list<string>::const_iterator it = li.begin();
    while(it != li.end())
    {
        cout << *it << endl;
        ++it;
    }

    return 0;
}
