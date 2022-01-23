#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v{1,2,3,3,3,3,4,5,6};

    cout << count(v.begin(), v.end(), 3) << endl;

    return 0;
}