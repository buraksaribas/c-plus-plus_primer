#include <iostream>
#include <vector>
#include <iterator>

bool func(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end, int n)
{
    while(beg != end)
    {
        if(n == *beg)
            return true;
        beg++;
    }
    return false;
}

int main()
{
    std::vector<int> v{1,2,3,4,5,6,7,8,9};
    std::cout << (func(v.cbegin(), v.cend(), 3) ? "found" : "not found") << std::endl;

    return 0;
}