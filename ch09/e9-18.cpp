#include <iostream>
#include <iterator>
#include <deque>

using namespace std;

int main()
{
    deque<string> dq;

    string str;
    while(getline(cin, str))
    {
        dq.push_back(str);
    }

    deque<string>::const_iterator it = dq.begin();
    while(it != dq.end())
    {
        cout << *it << endl;
        ++it;
    }

    return 0;
}
