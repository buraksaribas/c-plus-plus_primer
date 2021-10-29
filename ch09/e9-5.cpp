#include <iostream>
#include <vector>
#include <iterator>

std::vector<int>::const_iterator func(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end, int n)
{
    while(beg != end)
    {
        if(n == *beg)
            return beg;
        beg++;
    }
    return end;
}

int main()
{
    std::vector<int> v{1,2,3,4,5,6,7,8,9};
    std::vector<int>::const_iterator ci = func(v.cbegin(), v.cend(), 3);
    if(ci == v.end())
        std::cout << "Not found " << std::endl;
    else 
        std::cout << "Found " << *ci << " at position " << ci - v.begin() << std::endl;

    return 0;
}