#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::cin; using std::vector;

int main()
{
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        !(*it % 2) ? *it = *it : *it *= 2;
    }

    for(auto &e : v)
    {
        cout << e << " ";
    }
        
    return 0;
}