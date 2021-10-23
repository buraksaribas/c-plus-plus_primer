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
    
    // No problem. cause C have the default constructor.
    std::vector<C> v(10);

    //illegal, cause there are ten elements, each would be default initialized. 
    // But no default initializer for the temporary object.
    std::vector<NoDefault> v(10); 
    return 0;
}