#include <iostream>
#include <string>

using std::string;

class Sales_data {
  public:
    Sales_data() = default;
    Sales_data(string s) : bookNo(s) {
        std::cout << "string constructor ran" << std::endl;
    };

    Sales_data &combine(Sales_data){}; // s (string) is converted to a temporary Sales_data object and used in combine.
    //Sales_data &combine(Sales_data&) {}; // will error.
    //Sales_data &combine(const Sales_data&) const; // the conversion will error.
  private:
    string bookNo;
    int cnt = 0, rev = 0;
};

int main(int argc, char *argv[]) {
    string s = "yes";
    Sales_data s1;
    s1.combine(s);
    return 0;
}
