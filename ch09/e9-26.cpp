#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};

    std::vector<int> vec(std::begin(ia), std::end(ia));
    std::list<int> li(std::begin(ia), std::end(ia));

    std::cout << "vector: ";
    for(const auto &e : vec)
        std::cout << e << " ";
    std::cout << std::endl;


    std::cout << "list: ";
    for(const auto &e : li)
        std::cout << e << " ";
    std::cout << std::endl;


    for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); )
    {
        if(*it % 2)
            ++it;
        else
            it = vec.erase(it);
    }
    
    for(std::list<int>::iterator it = li.begin(); it != li.end();)
    {
        if(*it % 2)
            it = li.erase(it);
        else
            ++it;
    }

    std::cout << "vector: ";
    for(auto &e : vec)
        std::cout << e << " ";
    std::cout << std::endl;

    std::cout << "list: ";
    for(auto &e : li)
        std::cout << e << " ";
    
    std::cout << std::endl;


    return 0;
}