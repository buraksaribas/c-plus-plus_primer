#include <iostream>

using std::string; 
using std::cout; 
using std::cin;
using std::endl;

int main()
{
	int arr[] = {1,2,3};
    int *p1 = arr;
    int *p2 = arr;

    cout << *p1 << endl;
    cout << *p2 << endl;

    p1 += p2 - p1;

    cout << p2 - p1 << endl;
    cout << *p2 << endl;

    // The code move p1 to p2, it is the same with p1 = p2.
    // Any values are legal as long as both p1 and p2 point to elements in the same array.

    return 0;
}
