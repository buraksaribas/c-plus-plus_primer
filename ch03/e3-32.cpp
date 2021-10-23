#include <iostream>
#include <vector>

using std::string; 
using std::vector; 
using std::cout; 
using std::cin;

int main()
{
	int arr[10], arr2[10];

    for(size_t i = 0; i < 10; i++)
        arr[i] = i;
    
    for(size_t i = 0; i < 10; i++)
        arr2[i] = arr[i];
    
    vector<int> v;
    for(int i = 0; i < 10; i++)
        v.push_back(i);

    vector<int> v2 = v;

     for (auto i : v2) 
		cout << i << " ";
    cout << std::endl;

    return 0;
}
