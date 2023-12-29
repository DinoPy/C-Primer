#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

struct Person {
  public:
    Person() = default;
    Person(const string &n, const string &a) : name(n), address(a){};
    Person(istream &is) {
        is >> name;
        string addr = "";
        while (is >> addr) {
            address += " " + addr;
        }
    }

    string nm() const { return name; }
    string addr() const { return address; }
    istream &read(istream &is) {
        is >> name >> address;
        return is;
    }
    ostream &print(ostream &os) {
        os << "Name: " << nm() << "; Address: " << addr();
        return os;
    }

  private:
    string name;
    string address;
};

int main(int argc, char *argv[]) {
    Person per;
    per.read(cin);
    per.print(cout);

    Person p(cin);
    p.print(cout);

    return 0;
}
