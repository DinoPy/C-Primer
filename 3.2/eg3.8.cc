#include <iostream>
#include <string>

using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    string x = "all characters in a string to X";
    decltype(x.size()) index = 0;
    auto length = x.size();
    while (index < length) {
        if (isalnum(x[index]))
            x[index] = 'X';
        index += 1;
    }
    cout << x << endl;
    // the while loop isn't complex either compared to base range statement however it is less readable and can grow in complexity vastly.
    // it also requires keeping track of more variables.

    string y = "all characters in a string to X";
    for (decltype(y.size()) i = 0; i < length; i += 1) {
        if (isalnum(y[i]))
            y[i] = 'X';
    }
    cout << y << endl;
    // the for loop is similar to the while loop, it holds the same number of variables taht need to be tracked
    // it is also a little less readable
    // based on the need of an index i would choose the for based loop and then the other two
    return 0;
}