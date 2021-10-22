#include <iostream>
#include <string>
#include <vector>

class Screen{
    public:
        using pos = std::string::size_type;

        Screen() = default;
        Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') { }
        Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }

        char get() const { return contents[cursor]; }
        char get(pos r, pos c) const { return contents[r*width+c]; }
        Screen &set(char);
        Screen &set(pos,pos,char);
        Screen &move(pos r, pos c);
        Screen &display(std::ostream &os) { do_display(os); return *this; }
        const Screen &display(std::ostream &os) const{ do_display(os); return *this; }
        
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        std::string contents;

        void do_display(std::ostream &os) const { os << contents; }
};

inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r*width+col] = ch;
    return *this;
}

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

int main()
{
    Screen myScreen(5,5,'X');
    myScreen.move(4,0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";
    return 0;
}