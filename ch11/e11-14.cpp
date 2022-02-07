#include <map>
#include <utility>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
    map<string, vector<pair<string, string>>> families;
    for(string ln; cout << "Last name: ", cin >> ln;)
        for(string cn, birth; cout << "Children's name: ", cin >> cn, cout << "Children's birthday: ", cin >> birth;)
            families[ln].push_back({cn,birth});
    for(auto const &f : families)
    {
        cout << f.first << "\n";
        for(auto const &c : f.second)
            cout << c.first << " " << c.second << "\n";
    }
    cout << "\n";

    return 0;
}