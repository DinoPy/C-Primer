#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main () {
    string text = "Hello world";
    char sought = 'o';
    int iterations = 0;
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg) / 2;

    while (mid != end && *mid != sought) {
        cout << *mid << endl;
        if (sought < *mid) // is the element we want in the first half?
            end = mid; // if so, adjust the range to ignore the second half
        else             // the element we want is in the second half,
            beg = mid + 1;     // start looking with the element just after mid
        mid = beg + (end - beg) / 2;    // new mid
        iterations += 1;
    }
    cout << "Total iterations: " << iterations << endl;

    return 0;
}