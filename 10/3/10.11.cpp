#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool isShorter (const string &s1, const string &s2) { return s1.size() < s2.size(); }
void elimDups (vector<string> &vec) {
    sort(vec.begin(), vec.end());
    vector<string>::iterator end_unique = unique(vec.begin(), vec.end());
    vec.erase(end_unique, vec.end());
}

void print (vector<string> v) {
    for (const auto &i : v)
        cout << i << " ";
    cout << endl;
}

int main (int argc, char *argv[]) {
    vector<string> svec{"the",  "quick", "red",  "fox", "jumps",
                                  "over", "the",   "slow", "red", "turtle"};
    elimDups(svec);
    stable_sort(svec.begin(), svec.end(), isShorter);
    print(svec);

    return 0;
}
