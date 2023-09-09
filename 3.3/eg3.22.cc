#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main () {
    string text = "Bla bla bla sentence with a lot of words used to test iterators";
    for (auto it = text.begin(); it != text.end(); ++it)
        *it = toupper(*it);

    cout << text << endl;

    return 0;
}