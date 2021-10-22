#include <iostream>

void reset(int &n)
{
    n = 0;
}
int main()
{
    int x = 6;
    reset(x);
    std::cout << x;
    return 0;
}