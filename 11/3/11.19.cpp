#include <set>
#include <string>

class Sales_data {
  public:
    std::string isbn() const { return bookNo; }

  private:
    std::string bookNo;
};

bool compareIsbn(const Sales_data &lsh, const Sales_data &rhs) {
    return lsh.isbn() < rhs.isbn();
}

int main(int argc, char *argv[]) {
    std::multiset<Sales_data, decltype(compareIsbn)*> bookstore(compareIsbn);
    std::multiset<Sales_data, decltype(compareIsbn)*>::iterator s = bookstore.begin();
    return 0;
}
