#include <vector>
#include <iostream>
#include <list>
#include <forward_list>
#include <iterator>

void changeList(std::list<int> &li)
{
    std::list<int>::iterator it = li.begin();
    while(it != li.end())
    {
        if(*it % 2)
        {
            it = li.insert(it, *it);
            it = it + 2; // error: list doesn't support iterator arithmetic
        }
        else
            it = li.erase(it);
    }
}

void changeFl(std::forward_list<int> &fw)
{
    std::forward_list<int>::iterator cur = fw.begin();
    std::forward_list<int>::iterator pre = fw.before_begin();
    while(cur != fw.end())
    {
        if(*cur % 2)
        {
            pre = fw.insert_after(pre, *cur);
            ++pre;
            ++cur;
        }
        else
            cur = fw.erase_after(pre);
    }
}

int main()
{
    std::list<int> li{1, 2, 3, 4, 5, 6};
    std::forward_list<int> fli{1, 2, 3, 4, 5, 6};

    std::cout << "li:\n";
    for (const auto & i : li)
        std::cout << i << " ";
    std::cout << std::endl;

    changeList(li);

    for (const auto & i : li)
        std::cout << i << " ";

    std::cout << std::endl;

       std::cout << "fli:\n";
    for (const auto & i : fli)
      std::cout << i << " ";
    
    std::cout << std::endl;
    changeFl(fli);
    
    for (const auto & i : fli)
        std::cout << i << " ";
    
    std::cout << std::endl;

    return 0;
}