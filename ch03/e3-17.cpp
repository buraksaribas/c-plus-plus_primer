#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::string;
using std::vector;
using std::cin;
using std::cout;

int main()
{
	vector<string> v;
    string s;
    while(cin >> s)
    {
        v.push_back(s);
    }        
    
    for(auto &s : v)
        for(auto &c : s)
            c = toupper(c);

    for (string::size_type i = 0; i != v.size(); ++i)
    {
        if (i != 0 && i % 8 == 0) 
            cout << std::endl;
        cout << v[i] << " ";
    }
	
	return 0;
}

