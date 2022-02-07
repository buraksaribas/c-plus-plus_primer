#include <map>
#include <utility>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
    map<int, int> m;
    int a, b;
    while(cin >> a >> b)
    {
        map<int, int>::iterator it = m.find(a);
        if(it != m.end())
            it->second = b;
        else
            m.insert({a,b});
    }
    for(auto e: m)
        cout << e.first << " " << e.second << endl; 
    return 0;
}