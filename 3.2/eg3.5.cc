#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string concatInput;
    string input;
    while (cin >> input) {
        concatInput += " " + input;
    }
    cout << concatInput << endl;
    return 0;
}