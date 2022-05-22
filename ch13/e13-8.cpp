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
private:
    int i;
    string *ps;
};

int main()
{
    HasPtr hp1 ("World");
    HasPtr hp2 = hp1;
    hp1.set("Hello");

    std::cout << hp1.get() << " " << hp2.get() << std::endl;


    return 0;
}