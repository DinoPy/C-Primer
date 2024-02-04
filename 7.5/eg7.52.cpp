#include <iostream>


struct Sales_data {
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};

Sales_data item = {"978-0590353403", 25, 15.99};

int main (int argc, char *argv[]) {

    return 0;
}

// One of the conditions of an aggregate class is to have no inclass initializers which our struct has for units_sold and revenue;
// The list of initializers is correct and ordered correct.
