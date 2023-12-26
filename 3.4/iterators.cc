#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    string s = "some string";
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it ) {
        *it = toupper(*it);
        cout << *it << endl;
    }
}