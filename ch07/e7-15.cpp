#include <iostream>

struct Person;
std::istream &read(std::istream&, Person&);

struct Person
{
    std::string getName() const{ return name; }
    std::string getAddress() const{ return address; }

    std::string name;
    std::string address;

    Person() : name(""), address(""){}
    Person(const std::string n, const std::string a) : name(n), address(a){}
    Person(const std::string n) : name(n){}
    Person(std::istream &is);
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

Person::Person(std::istream &is)
{
    read(is, *this);
}

int main()
{
    Person p1;
    Person p2("John Doe");
    Person p3("John Doe", "Earth");
    Person p4(std::cin);

    print(std::cout, p1) << std::endl;
    print(std::cout, p2) << std::endl;
    print(std::cout, p3) << std::endl;
    print(std::cout, p4) << std::endl;
	return 0;
}