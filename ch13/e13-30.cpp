#include <iostream>
#include <string>
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
    
    friend void swap(HasPtr& lhs, HasPtr& rhs);
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

int main()
{
    HasPtr hp1 ("World");
    HasPtr hp2 = hp1;
    hp1.set("Hello");

    std::cout << hp1.get() << " " << hp2.get() << std::endl;


    return 0;
}