#include <vector>
#include <list>
#include <iostream>
#include <iterator>

bool isEqual(const std::list<int> li, const std::vector<int> vec)
{
    if(std::vector<int>(li.begin(), li.end()) == vec)
        return true;
    return false;
}

int main()
{
    std::list<int> li(4,3);
    std::vector<int> v2(4,3);

    (isEqual(li,v2) ? std::cout << "Equal\n" : std::cout << "Not equal\n");

    return 0;
}
