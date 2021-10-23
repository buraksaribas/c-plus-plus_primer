#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

int main()
{
	vector<vector<int>> ivec;
	// OK, a vector of vector of int, similar to 2-d int array

	vector<string> svec = ivec;
	// Error: the type of `svec` and `ivec` doesn't match

	vector<string> svec2(10, "null");
	// OK, a vector of ten strings whose value are all "null"

	return 0;
}

