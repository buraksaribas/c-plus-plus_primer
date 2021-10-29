#include <vector>
#include <iostream>

bool isEqual(const std::vector<int> v1, const std::vector<int> v2)
{
    if(v1 == v2)
        return true;
    return false;
}

int main()
{
    std::vector<int> v1(4,3);
    std::vector<int> v2(4,3);

    (isEqual(v1,v2) ? std::cout << "Equal\n" : std::cout << "Not equal\n");

    return 0;
}