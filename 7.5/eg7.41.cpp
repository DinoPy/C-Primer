#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

class Sales_data;
istream &read(istream &, Sales_data &);

class Sales_data {
    friend istream &read(istream &, Sales_data &);

  public:
    Sales_data(string name, int c, int r) : bookNo(name), cnt(c), revenue(r) {
        cout << "Non-delegated constructor" << endl;
    };
    Sales_data() : Sales_data("", 0, 0) {
        cout << "first delegated constructor, default one" << endl;
    };
    Sales_data(string name) : Sales_data(name, 0, 0) {
        cout << "second delegated constructor, takes name" << endl;
    };
    Sales_data(istream &is) : Sales_data() { read(is, *this); cout << "cin constructor" << endl;};

  private:
    string bookNo;
    int cnt, revenue;
};

istream &read(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.cnt >> price;
    item.revenue = price * item.cnt;
    return is;
}

int main (int argc, char *argv[]) {
    Sales_data s1("name"); // cales the 2nd constructor which calls the non delegated one, so the function body of the non delegated one gets in the front of the called constructor function body.
    cout << endl;
    Sales_data s2; // calls the default constructor which calls the non-delegated one. non delegated body function is run before the default constructor function body.
    cout << endl;
    Sales_data s3(cin); // calls the 4th constructor which calls the default constructor which calls the non-delegated constructor. The function body is called in reverse.
    cout << endl;
    Sales_data s4("name", 1, 2);
    return 0;
}
