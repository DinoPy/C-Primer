#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string input;
    getline(cin, input);
    for (char c : input) {
        if (!ispunct(c)) {
            cout << c;
        }
    }
    cout << endl;

    return 0;
}