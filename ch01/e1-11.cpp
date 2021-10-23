#include <iostream>

int main()
{
    int beg, end, sum = 0;
    std::cout << "Enter begin: ";
    std::cin >> beg;
    std::cout << "Enter end: ";
    std::cin >> end;

    while (beg <= end)
    {
        sum += beg;
        ++beg;
    }
    
    std::cout << "The sum of " << beg << " to " << end 
        << " is " << sum << std::endl;

    return 0;
}