#include <iostream>
#include <string>

using std::string;
using std::ostream; using std::istream;
struct Sales_data {
    // constructors
    Sales_data() : bookNo(""), units_sold(0), revenue(0.0) {};
    Sales_data(const string &s) : bookNo(s) {}
    Sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) {}
    Sales_data(istream &);


    string isbn() const { return bookNo; }
    Sales_data& combine (const Sales_data&);
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
