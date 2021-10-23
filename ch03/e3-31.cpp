#include <iostream>

using std::string; 
using std::cout; 
using std::cin;

int main()
{
	int arr[10];

    for(size_t i = 0; i < 10; i++)
        arr[i] = i;
    
    for(auto e:arr)
        cout << e << " ";

    return 0;
}
