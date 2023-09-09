#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<string> svec;
    string input;
    while (cin >> input)
        svec.push_back(input);

    for (auto i : svec)
        cout << i << endl;
    return 0;
}