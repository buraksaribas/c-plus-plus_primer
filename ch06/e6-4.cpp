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
    int n;
    while(std::cin >> n)
        std::cout << factorial(n) << std::endl;

    return 0;
}