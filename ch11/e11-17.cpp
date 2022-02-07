#include <set>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

int main() {
    std::multiset<std::string> c = {"The", "But", "And", "Or", "An", "A", "the", "but", "and", "or", "an", "a"};
    std::vector<std::string> v{ "example,", "Example", "example."};

    copy(v.begin(),v.end(),inserter(c,c.end()));
    for(const auto &e : c)
        std::cout << e << " ";
    std::cout << std::endl;

    //copy(v.begin(),v.end(),back_inserter(c)); // error multiset has no member push_back

    copy(c.begin(),c.end(),inserter(v,v.end()));
    for(const auto &e : v)
        std::cout << e << " ";
    std::cout << std::endl;

    copy(c.begin(),c.end(),back_inserter(v)); 
    for(const auto &e : v)
        std::cout << e << " ";
    std::cout << std::endl;

    return 0;
}