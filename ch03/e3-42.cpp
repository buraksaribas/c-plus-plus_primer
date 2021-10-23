#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1,2,3,4,5};
    int arr[v.size()], i = 0;

    for(auto it = v.begin(); it != v.end(); ++it)
        arr[i++] = *it;

    for(auto &e:arr)
        cout << e << " ";

    return 0;
}