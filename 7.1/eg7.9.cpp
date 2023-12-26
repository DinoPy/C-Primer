#include <string>
#include <iostream>

using std::string;
using std::istream; using std::cin;
using std::ostream; using std::cout; using std::endl;


struct Person {
    string name;
    string address;

    string nm() const {
        return name;
    } // both functions returning address or name will be const as their intention is to return the property value and not to change it.
    string addr() const {
        return address;
    }

    istream& read (istream &is) {
        is >> name >> address;
        return is;
    }

    ostream& print (ostream &os) {
        os << "Name: " << nm()
            << "; Address: " << addr();
        return os;
    }
};

int main (int argc, char *argv[]) {
    Person per;
    per.read(cin);
    per.print(cout);

    return 0;
}
