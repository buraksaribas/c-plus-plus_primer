#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main()
{
    // vector<int> ivec;
    // ivec[0] = 42; illegal

    vector<int> ivec2;
    ivec2.push_back(42);
    cout << ivec2[0];
	
	return 0;
}

