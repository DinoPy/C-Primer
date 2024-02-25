#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout; using std::endl;

int main (int argc, char *argv[]) {
    vector<string> vs {"1234.33", "33", "11", "65"};
    float total = 0;
    for (const auto &s : vs) {
        total += stof(s);
    }

    cout << total << endl;
    return 0;
}
