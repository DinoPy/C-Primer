
#ifndef SALES_DATA
#define SALES_DATA
#include <string>

#include "../split_custom.h"
#include <iostream>
using std::cerr;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::ostream;
using std::istream;

struct Sales_data {
    std::string bookNo;
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

ostream& print (ostream &os, Sales_data &item) {
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

#endif
/*
    0-201-78345-X 3 20.00
    0-201-78345-X 2 25.00
*/

// write a version of the transaction-processing program from 1.6 p.24 using the
// Sales_data class you defined for the exercises in 2.6.1 p. 72
int main(int argc, char *argv[]) {
    Sales_data total;
    string tt = "";
    cout << "enter book" << endl;
    if (read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans)) {
                if (total.isbn() == trans.isbn()) {
                    total.combine(trans);
                } else {
                    print(cout, total) << endl;
                    total = trans;
                }
            }
        print(cout, total) << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}

