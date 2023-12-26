#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    const string s = "Keep out !";
    for (auto &c : s) { /* ... */ }
    // the range is legal and the type of c is auto infered the result being a const char *
}