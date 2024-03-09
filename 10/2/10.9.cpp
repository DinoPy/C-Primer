#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout; using std::endl;
using std::unique; using std::sort;

void removeDupes (vector<string>& svec) {
    sort(svec.begin(), svec.end());
    auto endUnique = unique(svec.begin(), svec.end());
    svec.erase(endUnique, svec.end());
}

int main (int argc, char *argv[]) {
    vector<string> svec{"the",  "quick", "red",  "fox", "jumps",
                                  "over", "the",   "slow", "red", "turtle"};
    removeDupes(svec);

    for (const auto &i : svec)
        cout << i << " ";
    cout << endl;
    return 0;
}
