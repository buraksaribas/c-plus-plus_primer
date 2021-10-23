#include <iostream>

int absolute(int n)
{
    return n < 0 ? -n : n;
}

int main()
{
    int n;
    while(std::cin >> n)
    std::cout << absolute(n) << std::endl;

    return 0;
}