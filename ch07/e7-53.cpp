#include <iostream>

class Debug{
public:
    constexpr Debug(bool b = true) : hw(b), io(b), other(b) { }
    constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) { }
    
    constexpr bool any() const {return hw || io || other; }
    void setIO(bool b) { io = b; }
    void setHW(bool b) { hw = b; }
    void setOther(bool b) { other = b; }

private:
    bool hw;
    bool io;
    bool other;
};

int main(){
    constexpr Debug ioSub(false, true, false);
    if(ioSub.any())
        std::cerr << "print appropriate error messages" << std::endl;
    constexpr Debug prod(false);
    if(prod.any())
        std::cerr << "print an error message" << std::endl;
}