#include <iostream>
#include <string>
using namespace std;

class X{
public:
    X(){cout << "X()" << endl;}
    X(const X&){cout << "X(const X&)" << endl;}

};

int main()
{
    X x;
    X y = x;



    return 0;
}