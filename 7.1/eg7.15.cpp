#include <string>
#include <iostream>

using std::string;
using std::istream; using std::cin;
using std::ostream; using std::cout; using std::endl;


struct Person {
    Person() = default;
    Person(const string &n, const string &a) : name(n), address(a) {};
    Person(istream &is) {
        is >> name;
        string addr = "";
        while ( is >> addr) {
            address += " " + addr;
        }
    }
    string name;
    string address;

    string nm() const { return name; }
    string addr() const { return address; }
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

    Person p(cin);
    p.print(cout);

    return 0;
}

