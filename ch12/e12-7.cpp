#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

shared_ptr<vector<int>> foo(const vector<int>& rhs)
{
    return make_shared<vector<int>>(rhs);
}

void print(shared_ptr<vector<int>> rhs)
{
    for(auto &e : *rhs)
        cout << e << " ";
}

int main()
{
    vector<int> v2{1,2,3};
    shared_ptr<vector<int>> v = foo(v2);
    print(v);

    return 0;
}