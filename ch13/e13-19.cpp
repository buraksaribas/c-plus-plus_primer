#include <iostream>
#include <string>
using namespace std;

// No 

class Employee{
public:
    Employee() : _id(++cnt){}
    Employee(string name) : _name(name), _id(++cnt){ }
    Employee(const Employee&) = delete;
    Employee& operator=(const Employee&) = delete;

    const int GetId() const{return _id;}
    const string GetName() const{return _name;}
private:
    static int cnt;
    int _id;
    string _name;
};

int Employee::cnt = 0;

int main()
{



    return 0;
}