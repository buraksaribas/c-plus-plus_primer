#include <iostream>
#include <fstream>

class Sales_data {
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, Sales_data &item);
        
public:
    Sales_data(): Sales_data("", 0, 0.0) {}
    explicit Sales_data(const std::string &no) : Sales_data(no, 0, 0.0){}
    Sales_data(const std::string &no, unsigned us, double price) 
                                    : bookNo(no), units_sold(us), revenue(price * us){}
    explicit Sales_data(std::istream &is) : Sales_data() { read(is, *this); }

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

int main(int argc, char **argv)
{
	//std::ifstream input(argv[1]);
    std::ifstream input("e8.txt");

    Sales_data total;
    if(read(input, total))
    {
        Sales_data trans;
        while(read(input, trans))
        {
            if(total.isbn() == trans.isbn())
                total.combine(trans);
            else{
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout, total) << std::endl;

    }
    else
        std::cerr << "No data!!" << std::endl;

    std::string s;
    for(int i = 0; i != argc; ++i)
        std::cout << std::string(argv[i]) << std::endl;
	
	return 0;
}