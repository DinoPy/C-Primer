#ifndef SALES_DATA
#define SALES_DATA
#include "../split_custom.h"
#include <fstream>
#include <iostream>
#include <string>

class Sales_data {
  public:
    Sales_data() = default;

    bool read(string s) {
        vector<string> split_s = split(s, ' ');
        if (split_s.size() != 3)
            return false;

        bookNo = split_s[0];
        units_sold = stoi(split_s[1]);
        revenue = stof(split_s[2]);
        return true;
    }

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif

using std::cerr;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: ./program in out" << endl;
        return 1;
    }

    ifstream ifs(argv[1]);
    if (!ifs) {
        std::cerr << "Error opening file" + string(argv[1]) << endl;
        return 1;
    }

    std::ofstream ofs(argv[2], std::ofstream::app);

    Sales_data total;
    string tt = "";
    if (getline(ifs, tt)) {
        if (!total.read(tt))
            return -1;
        total.revenue = total.revenue * total.units_sold;
        Sales_data trans;
        while (getline(ifs, tt)) {
            if (trans.read(tt)) {
                if (total.bookNo == trans.bookNo) {
                    total.units_sold += trans.units_sold;
                    total.revenue += trans.revenue * trans.units_sold;
                } else {
                    ofs << total.bookNo << " " << total.units_sold << " "
                         << total.revenue << endl;
                    total.bookNo = trans.bookNo;
                    total.units_sold = trans.units_sold;
                    total.revenue = trans.revenue;
                }
            }
        }
        ofs << total.bookNo << " " << total.units_sold << " " << total.revenue
             << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}
