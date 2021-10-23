#include <vector>

class NoDefault{
public:
    NoDefault(int n){}
};

class C{
public:
    C() : nd(0) {}
private:
    NoDefault nd;
};

int main(){
    C c;

    //illegal, cause there are ten elements, each would be default initialized. 
    // But no default initializer for the temporary object.
    std::vector<NoDefault> v(10); 
    return 0;
}