#include <iostream>
#include <string>

int main() {
    std::string word, duplicate;
    bool repeated = false;

    while(std::cin >> word)
    {
        if(word[0] < 'A' || word[0] > 'Z')
            continue;
        if(word == duplicate)
        {
            repeated = true;
            break;
        }
        else
            duplicate = word;
    }

    std::cout << (repeated ? word : "No repeated") << std::endl;

    return 0;
}