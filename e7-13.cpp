#include <iostream>

struct Sales_data;
std::istream &read(std::istream &, Sales_data &);

struct Sales_data {
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    Sales_data() = default;
    Sales_data(const std::string &no) : bookNo(no){}
    Sales_data(const std::string &no, unsigned us, double price) 
                                    : bookNo(no), units_sold(us), revenue(price * us){}
    Sales_data(std::istream &is){
        read(is, *this);
    }
};

// member functions.
Sales_data &Sales_data::combine(const Sales_data &rhs){
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

// nonmember functions
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
	Sales_data total;
	if(read(std::cin, total))
	{
		Sales_data trans;
        while(read(std::cin, trans)){
            if(total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(std::cout, total);
                total = trans;
            }
        }
        print(std::cout, total);
	} 
    else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
  
	
	return 0;
}