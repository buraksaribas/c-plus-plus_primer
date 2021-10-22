#include <iostream>
#include <stdexcept>

int main() {
    int a, b;
    bool again = false;
    while(!again)
    {
        try
        {
            std::cin >> a >> b;
            if(b == 0)
                throw std::runtime_error("Divide by 0.");
            std::cout << a / b << std::endl;
        }
        catch(std::runtime_error e)
        {
            std::cerr << e.what() << '\n';
            std::cout << "Try again?\nYes(y) or No(n): ";
            char c;
            std::cin >> c;
            if(c == 'n' || !std::cin)
                again = true;
        }
        
    }

    return 0;
}