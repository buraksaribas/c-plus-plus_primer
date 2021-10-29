#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::list<int> li{1,2,3,4,5};
    std::vector<int> v{6,7,8,9,10};
    std::vector<double> v1(li.begin(), li.end());
    std::vector<double> v2(v.begin(), v.end());

    for(auto &e : li)
        std::cout << e << " ";
    std::cout << std::endl;
    for(auto &e : v1)
        std::cout << e << " ";
    std::cout << std::endl;

    for(auto &e : v)
        std::cout << e << " ";
    std::cout << std::endl;
    for(auto &e : v2)
        std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}