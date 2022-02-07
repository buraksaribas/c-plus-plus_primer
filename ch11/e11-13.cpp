#include <iostream>
#include <vector>
#include <utility>

int main() {
    std::vector<std::pair<std::string, int>> pairs;

    std::string c = "asd";
    for(int i = 0; i != 10; i++)
    {
        pairs.push_back({c,i}); //!! easiest way.
        //vec.push_back(std::make_pair(c, i));
        //vec.push_back(std::pair<std::string, int>(c, i));
        //vec.emplace_back(c, i); 
    }
    for(const auto &w : pairs)
    {
        std::cout << w.first << ": " << w.second << std::endl;
    }
    std::cout << "\n";

    return 0;
}