#include <iostream>
#include <iterator>

void print1(const int &i)
{
    std::cout << "void print1(const int i): " << std::endl;
    std::cout << i << std::endl;
}

void print2(const int *beg, const int *end)
{
    std::cout << "void print2(const int *beg, const int *end): " << std::endl;
    while(beg != end)
        std::cout << *beg++ << std::endl;
}

void print3(const int a[], size_t size)
{
    std::cout << "void print3(const int a[], size_t size): " << std::endl;
    for(int i = 0; i < size; i++)
        std::cout << a[i] << std::endl;
}

void print4(const char *pa)
{
    std::cout << "void print4(const int *pa): " << std::endl;
    if(pa)
        while(*pa)
            std::cout << *pa++ << std::endl;
}

void print5(const int (&a)[2])
{
    std::cout << "void print5(const int (&a)[2]): " << std::endl;
    for(auto e : a)
        std::cout << e << std::endl;
}

int main()
{
    int i = 0, j[2] ={0,1};
    char ch[4] = "pop";
    print1(i);
    print2(std::begin(j), std::end(j));
    size_t size = std::end(j) - std::begin(j);
    print3(j, size);
    print4(ch);
    print5(j);
    

    return 0;
}