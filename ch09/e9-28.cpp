#include <iostream>
#include <iterator>
#include <forward_list>
#include <string>

using std::string;
using std::forward_list;

void func(forward_list<string> &fl, string const &find, string  const &add)
{
    forward_list<string>::iterator prev = fl.before_begin();
    for(forward_list<string>::iterator cur = fl.begin(); cur != fl.end(); )
    {
        if(*cur == find)
        {
            fl.insert_after(cur, add);
            return;
        }
        else
        {
            prev = cur++;
        }
    }
    fl.insert_after(prev, add);
}

int main()
{
    forward_list<string> fli = {"asd","qwe","zxc"};
    
    return 0;
}