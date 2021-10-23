#include <iostream>
#include <vector>

void print(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end)
{
    if(beg != end)
    {
        std::cout << *beg << std::endl;
        return print(beg + 1, end);
    }        
}

int main()
{
    std::vector<int> v{1,2,3,4,5,6};
    print(v.cbegin(), v.cend());

    return 0;
}
