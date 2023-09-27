#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string str("some string");
    for (auto c : str)
        cout << c << endl;
    return 0;
};
