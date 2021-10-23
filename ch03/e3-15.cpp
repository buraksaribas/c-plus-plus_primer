#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;
using std::cout;

int main()
{
	vector<string> v;
    string n;
    while(cin >> n)
        v.push_back(n);
    
    for(auto e : v)
        cout << e << std::endl;
	
	return 0;
}

