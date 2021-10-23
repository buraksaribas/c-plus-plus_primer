#include <iostream>

class Sales_data {
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, Sales_data &item);
        
public:
    Sales_data(const std::string &no, unsigned us, double price) : bookNo(no), units_sold(us), revenue(price * us)
    { std::cout << "Sales_data(const std::string&, unsigned, double)" << std::endl; }
                   
    Sales_data(): Sales_data("", 0, 0)
    { std::cout << "Sales_data()" << std::endl; }
    
    Sales_data(const std::string &no) : Sales_data(no, 0, 0)
    { std::cout << "Sales_data(const std::string&)" << std::endl; }
    
    Sales_data(std::istream &is) : Sales_data() 
    {
        read(is, *this);
        std::cout << "Sales_data(std::istream &is)" << std::endl; 
    }

    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);

private:
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

inline
double Sales_data::avg_price() const
{
    return units_sold ? revenue / units_sold : 0;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item){
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue += item.units_sold * price;
    return is;
}

std::ostream &print(std::ostream &os, Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

int main()
{
	std::cout << "1. default way: " << std::endl;
    std::cout << "----------------" << std::endl;
    Sales_data s1;   
    
    std::cout << "\n2. use std::string as parameter: " << std::endl;
    std::cout << "----------------" << std::endl;
    Sales_data s2("CPP-Primer-5th");
    
    std::cout << "\n3. complete parameters: " << std::endl;
    std::cout << "----------------" << std::endl;
    Sales_data s3("CPP-Primer-5th", 3, 25.8);
    
    std::cout << "\n4. use istream as parameter: " << std::endl;
    std::cout << "----------------" << std::endl;
    Sales_data s4(std::cin);
  
	
	return 0;
}