#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;

void printInt(const vector<int> &v)
{
    for(auto it = v.cbegin(); it != v.cend(); it++)
        cout << *it << " ";
    cout << "size: " << v.size() << std::endl;
}

void printStr(const vector<string> &v)
{
    for(auto it = v.cbegin(); it != v.cend(); it++)
        cout << *it << " ";
    cout << "size: " << v.size() << std::endl;
}

int main()
{
	vector<int> v1; // 0
	printInt(v1);
	vector<int> v2(10); // 10, values are 0
	printInt(v2);
	vector<int> v3(10, 42); // 10, values are 42
	printInt(v3);
	vector<int> v4{ 10 }; // 1, value is 10
	printInt(v4);
	vector<int> v5{ 10,42 }; // 2, values are 10 and 42
	printInt(v5);
	vector<string> v6{ 10 }; // 10
	printStr(v6);
	vector<string> v7{ 10, "hi" }; // 10, values are "hi"
	printStr(v7);
    
	return 0;
}

