#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::list<const char *> li{"qwe", "sad", "zxc"};
    std::vector<std::string> v;
    v.assign(li.begin(),li.end());

    for (auto ptr : v)
        std::cout << ptr << std::endl;

    return 0;
}