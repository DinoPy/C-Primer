#include <iostream>
#include <string>

using std::istream;
class Sales_data;

class Sales_data {
    friend istream &read(istream &is, Sales_data &item);
    public:
        Sales_data(std::string s) : bookNo(s) {}
        Sales_data(std::string s, unsigned cnt, double rev):
            bookNo(s), units_sold(cnt), revenue(rev*cnt) {};
        Sales_data(std::istream &is = std::cin) { read(is, *this); };
    private:
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};

istream &read(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

Sales_data first_item(); // will use the cin constructor however we had to modify the string default argument as it resulted in an anbigous default constructor.

int main (int argc, char *argv[]) {
    Sales_data next; // will use the first constructor
    Sales_data last("9-999-99999-9"); // will use the first constructor
    return 0;
}
