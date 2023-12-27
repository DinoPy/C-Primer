#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;

struct Sales_data {
    Sales_data() = default;
    Sales_data(const string &s) : bookNo(s) {};
    Sales_data(const string &s, unsigned n, double r) : bookNo(s), units_sold(n), revenue(n * r) {};
    Sales_data(istream &is);
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    string isbn() const { return bookNo; }
    Sales_data& combine (const Sales_data &rhs) {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
    }

};


Sales_data& add (Sales_data &lhs, const Sales_data &rhs) {
    lhs.units_sold += rhs.units_sold;
    lhs.revenue += rhs.revenue;

    return lhs;
}

ostream& print (ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue;
    return os;
}

istream& read (istream &is, Sales_data &item) {
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

Sales_data::Sales_data(istream &is) {
    read(is, *this);
}


int main (int argc, char *argv[]) {
    Sales_data a;
    print(cout,a) << endl;

    Sales_data b("this book number");
    print (cout, b) << endl;

    Sales_data c("this book number", 10, 100);
    print (cout, c) << endl;

    Sales_data d(cin);
    print (cout, d) << endl;
    return 0;
}
