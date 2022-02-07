#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main()
{
    map<string, size_t> word_count;
    set<string> exclude = { "example,", "Example", "example."};
    string word;
    while (cin >> word)
        if(exclude.find(word) == exclude.end())
            ++word_count[word];
    for(const auto &w: word_count)
        cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << endl;


    cin.clear();
    cin.ignore();
    cin.get();
    return 0;
}