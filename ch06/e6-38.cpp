#include <iostream>

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

decltype(odd) &arrPtr(int i)
{
    return (i % 2) ? odd : even;
}

int main()
{
    int n = 4;
    int (&a)[5] = arrPtr(n);
    int *b = arrPtr(n);

    std::cout << a[2] << " " << b[3] << std::endl; 

    return 0;
}