#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<int> v;
    int n, sum = 0;
    while(cin >> n)
        v.push_back(n);
    for(auto it = v.begin(); (it + 1) != v.end(); it++)
    {
        cout << *it + *(it + 1) << endl;
    }
    cout << endl;

    for(auto itb = v.begin(), ite = v.end() - 1; itb <= ite; ++itb, --ite)
    {
        cout << *itb + *ite << endl;
    }
        
	return 0;
}

