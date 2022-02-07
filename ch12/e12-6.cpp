#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

vector<int>* foo(const vector<int>& rhs)
{
    return new vector<int>(rhs);
}

void print(const vector<int>* rhs)
{
    for(auto &e : *rhs)
        cout << e << " ";
}

int main()
{
    vector<int> v2{1,2,3};
    vector<int>* v = foo(v2);
    print(v);
    delete v;
    v = nullptr;


    return 0;
}