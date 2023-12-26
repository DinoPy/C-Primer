#include <iostream>
#include <string>

using std::string;
using std::istream;
using std::ostream;
using std::cin;
using std::cout;
using std::endl;

struct Sales_data {
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


/*
 * read function defines its Sales_data parameters as a non-const because the function is meant to make changes to the object
 * while print is meant to only read the object and make no changes to it.
*/
