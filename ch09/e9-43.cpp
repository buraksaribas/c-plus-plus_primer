#include <iostream>
#include <string>

using std::cout; 
using std::endl; 
using std::string;

void func(string &s, const string &oldVal, const string &newVal)
{
    for(auto it = s.begin(); it < s.end() - oldVal.size() + 1; )
    {
        auto it2 = oldVal.cbegin();
        for(auto it3 = it; it2 != oldVal.cend(); ++it2, ++it3)
            if(*it3 != *it2)
                break;

        if(it2 == oldVal.cend())
        {
            std::string::size_type pos = it - s.begin();
            s.erase(pos, oldVal.size());
            s.insert(pos, newVal);
            it = s.begin() + pos + newVal.size();
        }
        else
            ++it;
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