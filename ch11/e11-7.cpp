#include <map>
#include <set>
#include <vector>
#include <string>
#include <iostream>

int main() {
    std::map<std::string, std::vector<std::string>> families;
    for(std::string ln; std::cout << "Last name: ", std::cin >> ln;)
        for(std::string cn; std::cout << "Children's name: ", std::cin >> cn;)
            families[ln].push_back(cn);
    for(auto const &f : families)
    {
        std::cout << f.first << "\n";
        for(auto const &c : f.second)
            std::cout << c << " ";
    }
    std::cout << "\n";
    

    return 0;
}