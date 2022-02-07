#include <map>
#include <set>
#include <list>
#include <string>
#include <iostream>

int main() {
    std::map<std::string, std::list<int>> words {{"abc", {1,2,3}}, {"def", {45,46,47}}, {"qq", {1,3}}};

    for(auto const &w : words)
    {
        std::cout << w.first << ":";
        for(auto const &l : w.second)
            std::cout << " " << l;
        std::cout << "\n";
    }
    return 0;
}