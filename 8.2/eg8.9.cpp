#include <iostream>
#include <string>
#include <sstream>

using std::istream;
using std::string;
using std::cout; using std::cin;

istream &read (istream &is) {
    string s;
    while (is >> s) {
        cout << s << std::endl;;
    }

    is.clear();
    return is;
}

int main (int argc, char *argv[]) {
    std::istringstream os("test, test");
    read(os);
    return 0;
}
