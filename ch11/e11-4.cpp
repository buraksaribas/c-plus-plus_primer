#include <map>
#include <set>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

int main() {
    std::map<std::string, size_t> wordCount;
    std::set<std::string> exclude = {"The", "But", "And", "Or", "An", "A", "the", "but", "and", "or", "an", "a"};
    std::string word;
    while(std::cin >> word)
    {
        for (auto& ch : word) ch = tolower(ch);
        word.erase(std::remove_if(word.begin(), word.end(), ispunct),
                   word.end());
        ++wordCount[word];
    }
    for(const auto &w : wordCount)
        std::cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << std::endl;

    return 0;
}