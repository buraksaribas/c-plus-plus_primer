#include <iostream>
#include <iterator>

using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5};
    int *b = begin(arr), *e = end(arr);

    while(b < e)
        *b++ = 0;
    
    for(auto e: arr)
        cout << e << endl;

    return 0;
}
