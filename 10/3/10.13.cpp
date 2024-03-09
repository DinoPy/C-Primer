#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isLongerThan5 (string s) {
    return s.size() < 5;
}

int main (int argc, char *argv[]) {
    vector<string> svec{"the",  "quick", "red",  "fox", "jumps",
                                  "over", "the",   "slow", "red", "turtle"};
    partition(svec.begin(), svec.end(), isLongerThan5);
    return 0;
}
