#include <iostream>
using std::cout; using std::endl; using std::cin;

int main()
{
    const char *cp = "Hello World";
    if(cp && *cp)
        cout << "wow" << endl;

    /* 
    cp is a pointer to const char *, and it's not a nullptr. true.
    *cp is a const char: 'H', and it is explicit a nonzero value. true.
    true && true -> true. 
    */
        
    return 0;
}