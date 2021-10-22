#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector;
using std::string;
using std::cout;
using std::cin;

int main()
{
    vector<string> text;
    string s;
    while(getline(cin, s))
        text.push_back(s);
    for(auto it = text.begin(); it != text.end() && !it->empty(); ++it)
        for(auto &c : *it)
            c = toupper(c);
	
    for(auto it = text.begin(); it != text.end(); ++it)
        cout << *it << std::endl;

	return 0;
}

