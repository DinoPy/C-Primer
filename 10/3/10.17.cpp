#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Sales_data {
    public:
        Sales_data() = default;
        Sales_data (string s): bookNo(s) {};
        string isbn() const { return bookNo; };
    private:
        string bookNo;
        int units_sold = 0;
        double revenue = 0.0;
};

auto compare = [] (Sales_data &i1, Sales_data &i2) {
    return i1.isbn() == i2.isbn();
};

int main (int argc, char *argv[]) {
    vector<Sales_data> sales_items;
    sales_items.emplace_back("b");
    sales_items.emplace_back("d");
    sales_items.emplace_back("r");
    sales_items.emplace_back("a");
    sales_items.emplace_back("c");

    sort(sales_items.begin(), sales_items.end(),
            [] (Sales_data &i1, Sales_data &i2) -> bool {
                return i1.isbn() < i2.isbn();
            });

    for (const auto &i : sales_items)
        cout << i.isbn() << endl;
    return 0;
}
