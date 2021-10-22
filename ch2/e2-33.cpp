#include <iostream>

int main() 
{
  int i = 0, &r = i;
  const int ci = i, &cr = ci;

  auto a = r;  // int
  auto b = ci;  // int
  auto c = cr;  // int
  auto d = &i;  // int *
  auto e = &ci;  // const int *
  const auto f = ci;  // const int
  auto &g = ci;  // const int &

  
  
  return 0;
}