#include <iostream>
using std::cout; using std::endl; using std::cin;

int main()
{
    int i;
    double d;
    d = i = 3.5;
    cout << i << " " << d << endl; // 3 3
    i = d = 3.5;
    cout << i << " " << d << endl; // 3 3.5

    
    
        
    return 0;
}