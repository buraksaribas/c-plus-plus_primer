#include <iostream>
#include <string>

class Book{
    public:
        Book(std::string const &author, std::string const &name, std::string const &publisher, unsigned year)
            : _author(author), _name(name), _publisher(publisher), _year(year) { }
        Book() : _author(""), _name(""), _publisher(""), _year(0) { }
        Book(std::istream &is) {
            is >> _author >> _name >> _publisher >> _year;
        }

    private:
        std::string _author;
        std::string _name;
        unsigned _year;
        std::string _publisher;
};

class Date{
    public:
        Date(unsigned d, unsigned m, unsigned y) : day(d), month(m), year(y) { }
    private:
        unsigned day;
        unsigned month;
        unsigned year;
};