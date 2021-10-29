#include <iostream>
#include <iterator>
#include <forward_list>

int main()
{
    std::forward_list<int> fl;
    for(int i = 10; i >= 0; i--)
        fl.push_front(i);
    
    std::forward_list<int>::iterator cur = fl.begin();
    std::forward_list<int>::iterator pre = fl.before_begin();

    while(cur != fl.end())
    {
        if(*cur % 2)
            cur = fl.erase_after(pre);
        else
        {
            pre = cur;
            ++cur;
        }
    }

    for(const auto &e : fl)
        std::cout << e << " ";

    std::cout << std::endl;

    return 0;
}