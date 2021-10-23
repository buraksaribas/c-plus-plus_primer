#include <iostream>
#include <string>
#include <vector>
/*
class Window_mgr{
    private:
        std::vector<Screen> screens{Screen(24,80,' ')};
};
*/
class Screen{
    public:
        typedef std::string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd) : height(ht), width(wd) { }
        Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }
        char get() const { return contents[cursor]; }
        inline char get(pos ht, pos wd) const;
        Screen &move(pos r, pos c);
        void some_member() const;
        Screen &set(char);
        Screen &set(pos,pos,char);
        Screen &display(std::ostream &os) { do_display(os); return *this; }
        const Screen &display(std::ostream &os) const{ do_display(os); return *this; }
    private:
        mutable size_t access_ctr;
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

char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

void Screen::some_member() const
{
    ++access_ctr;
}

int main()
{
    Screen myScreen(5,3);
    char ch = myScreen.get();
    ch = myScreen.get(0,0);
    myScreen.move(4,0);
    myScreen.set('#');
    myScreen.display(std::cout).set('*');
    
    const Screen blank(5,3);
    myScreen.set('#').display(std::cout);
    blank.display(std::cout);
    return 0;
}