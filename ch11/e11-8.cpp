#include <map>
#include <set>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

int main() {

    std::vector<std::string> exclude = {"The", "But", "And", "Or", "An", "A", "the", "but", "and", "or", "an", "a"};
    std::string word;
    while(std::cin >> word)
    {
        auto is_excluded = std::binary_search(exclude.cbegin(), exclude.cend(), word);
        auto reply = is_excluded ? "excluded" : "not excluded";
        std::cout << reply << std::endl;
    }

    return 0;
}