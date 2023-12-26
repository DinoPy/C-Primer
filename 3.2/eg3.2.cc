#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

int main () {
    string input;
    while(getline(cin, input)) {
        cout << input << endl;
    }
    return 0;

    /*
    reading a word at a time;
    while (cin >> input) {
        cout << input << endl;
    }
    */
}