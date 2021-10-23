#include <iostream>
#include <string>
#include <vector>

class Screen{
    public:
        using pos = std::string::size_type;
        Screen() = default;
        char get() const { return contents[cursor]; }    
        char get(pos r, pos c) const { return contents[r*width+c]; }  

    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;
};

int main()
{

    return 0;
}