#include <iostream>

int &get(int *arr, int index)
{
    return arr[index];
}

int main()
{
    int ia[10];
    for(int i = 0; i != 10; i++)
        get(ia, i) = i;

    for(auto &e : ia)
        std::cout << e << " ";
    return 0;
}

// The function is legal. It return a reference to the element at `index` in
// array `arr`. The reference return is lvalue, thus can be used to assign to
// the array.