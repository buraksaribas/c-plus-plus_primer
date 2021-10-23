#include <iostream>
using std::cout; using std::endl; using std::cin;

int main()
{
    int a;
    cin >> a;
    if(a % 2)
        cout << "odd" << endl;
    else    
        cout << "even" << endl;
    return 0;
}