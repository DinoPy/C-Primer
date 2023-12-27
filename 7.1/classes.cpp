#include <iostream>
#include <string>

using std::string;
using std::ostream; using std::istream;
struct Sales_data {
    // constructors
    Sales_data() = default;
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

Sales_data add(const Sales_data&, const Sales_data&);
ostream &print (ostream&, const Sales_data&);
istream &read (istream&, Sales_data&);

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data& rht) {
    units_sold += rht.units_sold;
    revenue += rht.revenue;
    return *this;
}


istream &read (istream& is, Sales_data& item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print (ostream& os, Sales_data& item) {
    os<< item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add (const Sales_data &lhs, const Sales_data &rhs) {
        Sales_data sum = lhs;
        sum.combine(rhs);
        return sum;
}

Sales_data::Sales_data(istream &is) {
    read (is, *this); // this will read a transaction from is into this object.
}

int main (int argc, char *argv[]) {

    return 0;
}


