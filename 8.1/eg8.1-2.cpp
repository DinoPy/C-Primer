#include <iostream>
#include <string>

using std::istream;
using std::string;
using std::cout; using std::cin;

istream &read (istream &is) {
    string s;
    while (is >> s) {
        cout << s;
    }

    is.clear();
    return is;
}

int main (int argc, char *argv[]) {
    istream &is = read(cin);
    return 0;
}
