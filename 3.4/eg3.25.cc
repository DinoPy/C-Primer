#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector; using std::next; using std::distance;
using std::cin; using std::cout; using std::endl;

int main() {
    // original version using subscript
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade)
        if (grade <= 100)
            ++*(scores.begin() + grade / 10);
    for (auto i : scores)
        cout << i << " ";
        i ++:
    cout << endl;
    return 0;
}
