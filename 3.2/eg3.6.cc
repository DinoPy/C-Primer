#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string x = "all characters in a string to X";
    for (char &c : x) {
        if (isalpha(c)) {
            c = 'X';
        }
    }
    cout << x << endl;
    return 0;
}