#ifndef SALES_DATA
#define SALES_DATA
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif

#include "../split_custom.h"
#include <iostream>
using std::cerr;
using std::cin;
using std::endl;
using std::string;
using std::vector;

/*
    0-201-78345-X 3 20.00
    0-201-78345-X 2 25.00
*/

// write a version of the transaction-processing program from 1.6 p.24 using the
// Sales_data class you defined for the exercises in 2.6.1 p. 72

bool read_to_class(Sales_data &data, string tt) {
    if (tt.size() < 1)
        return false;
    vector<string> split_tt = split(tt, " ");
    if (split_tt.size() != 3) {
        cerr << "Incorrect data format" << endl;
        return false;
    }
    data.bookNo = split_tt[0];
    data.units_sold = stoi(split_tt[1]);
    data.revenue = stof(split_tt[2]);
    return true;
}

int main(int argc, char *argv[]) {
    Sales_data total;
    string tt = "";
    cout << "enter book" << endl;
    if (getline(cin, tt)) {
        if (!read_to_class(total, tt))
            return -1;
        total.revenue = total.revenue * total.units_sold;
        Sales_data trans;
        while (getline(cin, tt)) {
            if (read_to_class(trans, tt)) {
                cout << total.revenue << endl;
                if (total.bookNo == trans.bookNo) {
                    total.units_sold += trans.units_sold;
                    total.revenue += trans.revenue * trans.units_sold;
                } else {
                    cout <<total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                    total.bookNo = trans.bookNo;
                    total.units_sold = trans.units_sold;
                    total.revenue = trans.revenue;
                }
            }
        }
        cout <<total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}
