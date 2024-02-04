#include <iostream>
#include <string>
using std::string;

// string null_isbn("9-999-99999-9"); - will create a string named null_isbn
// with the string literal contents. Sales_data item1(null_isbn); - will use the
// string to create item1 that will have default initialized count and revenue
// but the null_isbn as bookNo; Sales_data item2("9-999-99999-9"); - the literal
// will be converted to string and used to construct item2. If the constructor
// was explicit both construction would still work as they receive the string
// the constructor asks for.

class Sales_data {
  public:
    Sales_data() = default;
    explicit Sales_data(string s) : bookNo(s){ std::cout << "constructor ran" << std::endl; };

  private:
    string bookNo;
    int count = 0, revenue = 0;
};

int main(int argc, char *argv[]) {
    string null_isbn("9-999-99999-9");
    Sales_data item1(null_isbn);
    Sales_data item2("9-999-99999-9");
    return 0;
}
