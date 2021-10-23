#include <iostream>

bool hasCapital(const std::string &s)
{
    for(auto &c : s)
    {
        if(c >= 'A' && c <= 'Z')
            return true;
    }
    return false;
}

void toLowers(std::string &s)
{
    for(auto &c : s)
    {
        if(c >= 'A' && c <= 'Z')
            c -= 'A' - 'a';
    }
}


int main()
{
    std::string s("asdfSAdAA");
    std::cout << hasCapital(s) << " " << hasCapital("qwer") << std::endl;
    std::cout << s << std::endl;
    toLowers(s);
    std::cout << s << std::endl;

    return 0;
}