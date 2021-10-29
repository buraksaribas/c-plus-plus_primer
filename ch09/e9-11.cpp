#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1;
    std::vector<int> v2(10,1);
    std::vector<int> v3(10);
    std::vector<int> v4{1,2,3,4,5};
    std::vector<int> v5 = {1,2,3,4,5};
    std::vector<int> v6 = v5;
    std::vector<int> v7(v5.begin(), v5.end());
    std::vector<int> v8(v1);

    return 0;
}