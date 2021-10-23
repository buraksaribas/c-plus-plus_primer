#include <vector>
#include <iostream>

int f(int, int);

int main() 
{
    std::vector<int (*)(int, int)> vf;
    vf.push_back(f);
    vf[0](1, 2);

    for (const auto &e : vf)
        e(9, 9);

    return 0;
}

int f(int a, int b) {
  std::cout << "Called foo(" << a << ", " << b << ")" << std::endl;
  return 0;
}