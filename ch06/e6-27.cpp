#include <iostream>
#include <initializer_list>

int sum(std::initializer_list<int> li)
{
    int sum = 0;
    for(const auto &e : li)
        sum += e;
    return sum;
}

int main(int argc, char *argv[]) {
    std::cout << sum({1,3,2,4});

    return 0;
}