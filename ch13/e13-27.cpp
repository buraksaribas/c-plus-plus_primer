#include <iostream>
#include <string>
using namespace std;

class HasPtr{
public:
    HasPtr(const string &s = string()) :
        ps(new string(s)), i(0), use(new size_t(1)) {}
    HasPtr(const HasPtr& hp) : i(hp.i), ps(new string(*hp.ps)), use(hp.use)
    {
        ++*use;
    }
    ~HasPtr()
    {
        if(--*use == 0)
        {
            delete use;    
            delete ps;
        }
    }
    HasPtr& operator=(const HasPtr& hp)
    {
        ++*hp.use;
        if(--*use == 0)
        {
            delete use;    
            delete ps;
        }
        ps = hp.ps;
        i = hp.i;
        use = hp.use;
        return *this;
    }
    void set(const string& s){ *ps = s; }
    const string &get() const { return *ps;}
private:
    int i;
    string *ps;
    size_t *use;
};

int main()
{
    HasPtr hp1 ("World");
    HasPtr hp2 = hp1;
    hp1.set("Hello");

    std::cout << hp1.get() << " " << hp2.get() << std::endl;


    return 0;
}