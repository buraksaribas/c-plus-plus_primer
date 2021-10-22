#include <iostream>

struct Person
{
    std::string getName() const{ return name; }
    std::string getAddress() const{ return address; }

    std::string name;
    std::string address;
};

std::istream &read(std::istream &is, Person &p)
{
    is >> p.name >> p.address;
    return is;
}

std::ostream &print(std::ostream &os, Person &p)
{
    os << p.getName() << " " << p.getAddress() << std::endl;
    return os;
}

int main()
{
    Person p1;
    read(std::cin, p1);
    print(std::cout, p1);
	return 0;
}