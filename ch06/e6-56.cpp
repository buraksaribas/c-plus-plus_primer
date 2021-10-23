#include <vector>
#include <iostream>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divd(int a, int b);

int main() 
{
    std::vector<int (*)(int, int)> vf;
    vf.push_back(add);
    vf.push_back(sub);
    vf.push_back(mul);
    vf.push_back(divd);

    for (const auto &e : vf)
        std::cout << e(6,3) << std::endl;

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int divd(int a, int b){
    try
    {
        if(b == 0)
            throw std::runtime_error("Divide by 0");
        return a / b;
    }
    catch(std::runtime_error err)
    {
        std::cerr << err.what() << std::endl;
        return 0;
    }
}

