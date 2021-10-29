#include <iostream>
#include <string>

using std::cout; 
using std::endl; 
using std::string;

void func(string &s, const string &oldVal, const string &newVal)
{
    for(string::size_type pos = 0; pos < s.size(); )
    {
        if(s.substr(pos, oldVal.size()) == oldVal){
            s.replace(pos, oldVal.size(), newVal);
            pos += newVal.size();
        }
        else
            ++pos;
    }
}

int main()
{
    string s{ "To drive straight thru is a foolish, tho courageous act." };
    func(s, "tho", "though");
    func(s, "thru", "through");
    cout << s << endl;

    return 0;
}