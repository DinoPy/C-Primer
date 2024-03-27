#include <string>
#include <set>

using std::string;

class Sales_data {
    public:
        std::string isbn() const { return bookNo; };
    private:
        string bookNo;
        int units_sold = 0;
        double revenue = 0.0;
};

bool compareIsbn (const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() < rhs.isbn();
}

std::multiset<Sales_data, bool (*) (const Sales_data &, const Sales_data &)> bookstore (compareIsbn);


int main (int argc, char *argv[]) {

    return 0;
}
