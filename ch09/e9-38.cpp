#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> v;
    for (std::string buffer; std::cin >> buffer; v.push_back(buffer))
        std::cout << v.capacity() << std::endl;
    
    std::cout << "Size: " << v.size() << std::endl;
    
    v.shrink_to_fit();
    std::cout << "Size: " << v.size() << "\tCapacity : " << v.capacity() << std::endl;

    return 0;
}