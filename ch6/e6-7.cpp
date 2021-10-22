#include <iostream>

size_t f()
{
    static size_t cnt = 0;
    return cnt++;
}

int main()
{
    int n = 0;
    while(n++ < 10)
        std::cout << f() << std::endl;

    return 0;
}