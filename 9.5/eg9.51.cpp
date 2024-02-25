#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// won't be finished.

class Test {

  public:
    Test(string s) {
        if ( s.find_first_of(full_months) != string::npos) {

        }
        if ( s.find_first_of(shortened_months) != string::npos) {

        }
        cout << s << endl;
    }

    unsigned val1 = 0;
    unsigned val2 = 0;
    unsigned val3 = 0;

    void print_value () {
        cout << val1 << " " << val2 << " " << val3 << endl;
    }

  private:
    string full_months = "January February March April May June July August September October November December";
    string shortened_months = "Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec";
};

int main(int argc, char *argv[]) {
    Test t1("January 1, 1900");
    Test t2("1/1/1900");
    Test t3("Jan 1, 1900");
    return 0;
}
