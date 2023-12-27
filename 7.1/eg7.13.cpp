#ifndef SALES_DATA
#define SALES_DATA
#include <iostream>
#include <string>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;
using std::vector;

struct Sales_data;
istream &read(istream &, Sales_data &);
ostream &print(ostream &, const Sales_data &);

struct Sales_data {
    Sales_data() = default;
    Sales_data(istream &is) {
        double price = 0.0;
        is >> bookNo >> units_sold >> price;
        revenue = units_sold * price;
    }
    Sales_data(const string &s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(n * p){};
    Sales_data(const string &s) : bookNo(s){};

    Sales_data &combine(const Sales_data &rhs) {
        units_sold += rhs.units_sold;
        revenue += rhs.revenue;
        return *this;
    }

    string isbn() const { return bookNo; };

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

istream &read(istream &is, Sales_data &item) {
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
ostream &print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}
#endif

/*
    0-201-78345-X 3 20.00
    0-201-78345-X 2 25.00
*/

int main(int argc, char *argv[]) {
    Sales_data total;
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
            print(cout, total) << endl;
        }
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}
