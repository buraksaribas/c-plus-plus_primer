#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

int main()
{
	vector<int> v1; // 0
	vector<int> v2(10); // 10, values are 0
	vector<int> v3(10,42); // 10, values are 42
	vector<int> v4{10}; // 1, value is 10
	vector<int> v5{10,42}; // 2, values are 10 and 42
	vector<string> v6{10}; // 10
	vector<string> v7{10, "hi"}; // 10, values are "hi"
	
	return 0;
}

