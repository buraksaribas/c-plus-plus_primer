#include <iostream>
using std::cout; using std::endl; using std::cin;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b && b > c && c > d) 
        cout << "*";    
        
    return 0;
}