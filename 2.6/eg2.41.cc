#include <iostream>
#include "Sales_data.h"

struct Sales_data {
    std::string bookNo = "0";
    unsigned units_sold = 0;
    double price = 0.0;
};

void eg120 () { // also applies to eg1.21 and eg1.22 , eg 1.23 and eg1.24 as well
    Sales_data temp;
    double revenue = 0.0;
    std::cin >> temp.bookNo >> temp.units_sold >> temp.price;
    int transactionNo = 0;
    while (std::cin) {
        Sales_data book;
        std::cin >> book.bookNo >> book.units_sold >> book.price;
        if (temp.bookNo == book.bookNo) {
            temp.units_sold += book.units_sold;
            temp.price = (book.price + temp.price ) / 2;
            transactionNo += 1;
        } else {
            double revenue = temp.units_sold * temp.price;
            std::cout << temp.bookNo << " " << temp.units_sold << " " << temp.price << " " << revenue << " " << transactionNo << std::endl;
            temp = book;
            transactionNo = 1;
        }
    }
}

int main () {
    eg120();
    return 0;
}