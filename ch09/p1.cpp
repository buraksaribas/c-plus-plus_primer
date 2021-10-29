#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <deque>
#include <string>
#include <array>
#include <forward_list>

using namespace std;

template <typename T>
void print(const T x){
    for(auto &e : x)
    {
        cout << e << " ";
    }
    cout << endl;
}

int main()
{
    list<int> li;
    vector<int> vec;
    forward_list<int> fl;
    deque<int> dq;
    array<int,4> ar;

    li.push_back(1);
    li.push_back(2);
    vec.push_back(1);
    vec.push_back(2);
    
    print(li);
    print(vec);

    li.emplace_back(3);
    li.insert(li.begin(),4);
    print(li);

    return 0;
}
