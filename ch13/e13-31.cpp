#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class HasPtr{
public:
    HasPtr(const string &s = string()) :
        ps(new string(s)), i(0) {}
    HasPtr(const HasPtr& hp) : i(hp.i), ps(new string(*hp.ps))
    {
    }
    ~HasPtr()
    {
        delete ps;
    }
    HasPtr& operator=(const HasPtr& hp)
    {
        string *temp = new string(*hp.ps);
        delete ps;
        ps = temp;
        i = hp.i;
        return *this;
    }
    void set(const string& s){ *ps = s; }
    const string &get() const { return *ps;}
    void show() const
    { 
        std::cout << *ps << std::endl; 
    }
    
    friend void swap(HasPtr& lhs, HasPtr& rhs);
    friend bool operator<(const HasPtr& lhs, const HasPtr &rhs);
private:
    int i;
    string *ps;
};

inline void swap(HasPtr& lhs, HasPtr& rhs)
{
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.i, rhs.i);
    std::cout << "call swap(HasPtr& lhs, HasPtr& rhs)" << std::endl;  
}

inline bool operator<(const HasPtr& lhs, const HasPtr &rhs)
{
    return *lhs.ps < *rhs.ps;
}

int main()
{
    HasPtr s{ "s" }, a{ "a" }, c{ "c" };
    std::vector<HasPtr> vec{ s, a, c };
    std::sort(vec.begin(), vec.end());

    for (auto const& elem : vec) 
        elem.show();


    return 0;
}