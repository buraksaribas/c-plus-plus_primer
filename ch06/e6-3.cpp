#include <iostream>

int factorial(int n)
{
    int r = 1;
    while(n > 0)
        r *= n--;
    return r;
}

int main()
{
    std::cout << factorial(0) << std::endl;

    return 0;
}