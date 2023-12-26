#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout; using std::endl;

bool has_capital (const string &s) {
    for (auto c = s.begin(); c != s.end(); ++c) {
       if (std::isupper(*c)) return true;
    }
    return false;
}

void convert_uppercase (string &s) {
    for (auto &c : s) {
        c = std::toupper(c);
    }
}

int main (int argc, char *argv[]) {
    string s1 = argv[1];
    cout << has_capital(s1) << endl;
    convert_uppercase(s1);;
    cout << s1 << endl;
    return 0;
}


// we are required to pass a non const variable to a function that will impact/modify that value.
// in the case of has_capital we process only read only actions so we are free to receive both const or non const
// but in the case of convert_uppercase we need to modify the reference bound variable hence we are limited.

