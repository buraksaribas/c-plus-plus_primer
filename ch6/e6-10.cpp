#include <iostream>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 4, b = 7;
    std::cout << "Before swap: a = " << a << " b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "After swap: a = " << a << " b = " << b << std::endl;

    return 0;
}