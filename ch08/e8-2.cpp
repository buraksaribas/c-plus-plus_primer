#include <iostream>
#include <string>

std::istream &func(std::istream &is)
{
    std::string str;
    while(is >> str)
        std::cout << str << " ";
    std::cout << std::endl;
    is.clear();
    return  is;
}

int main()
{
    std::istream &is = func(std::cin);
    std::cout << is.rdstate() << std::endl;
    
    return 0;
}