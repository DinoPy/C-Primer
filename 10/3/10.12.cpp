#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Sales_data {
    public:
        Sales_data() = default;
        Sales_data(string isbn) : bookNo(isbn) {};
        Sales_data (string isbn, int units, double price) : bookNo(isbn), units_sold(units), revenue ( price * units) {};

        string isbn() const {
            return bookNo;
        }
    private:
        string bookNo;
        int units_sold = 0;
        double revenue = 0;
};

bool compareIsbn (Sales_data i1, Sales_data i2) {
    return i1.isbn() < i2.isbn();
}

int main (int argc, char *argv[]) {
    Sales_data item1 ("000-0000000-00");
    Sales_data item2 ("100-0000000-00", 2, 2.5);
    Sales_data item3 ("200-0000000-00", 2, 2.5);

    vector<Sales_data> v1 {item3, item1, item2};

    sort(v1.begin(), v1.end(), compareIsbn);

    for (const auto &i : v1)
        cout << i.isbn() << endl;
    return 0;
}
