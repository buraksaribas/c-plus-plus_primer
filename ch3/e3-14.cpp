#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

int main()
{
	vector<int> v;
    int n;
    while(cin >> n)
        v.push_back(n);
    
    for(auto e : v)
        cout << e << std::endl;
	
	return 0;
}

