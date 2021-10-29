#include <iostream>
#include <iterator>
#include <list>
#include <deque>

using namespace std;

int main()
{
    list<int> li;
    deque<int> dodd;
    deque<int> deven;

    int n;
    while(cin >> n)
        li.push_back(n);
    
    list<int>::const_iterator it = li.cbegin();

    for( ; it != li.cend(); ++it)
    {
        if(*it % 2)
            dodd.push_back(*it);
        else 
            deven.push_back(*it);
    }

    for(auto &e : dodd)
    {
        cout << e << " ";
    }
    cout << endl;
    for(auto &e : deven)
    {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}
