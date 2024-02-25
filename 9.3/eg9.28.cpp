#include <forward_list>
#include <iostream>
#include <string>

using namespace std;

void adder(forward_list<string> &fl, string s1, string s2) {
    forward_list<string>::iterator c = fl.begin(), p = fl.before_begin();
    bool wasAdded = false;
    while (c != fl.end()) {
        if (*c == s1) {
            c = fl.insert_after(c, s2);
            wasAdded = true;
        } else {
            p = c;
            ++c;
        }
    }

    if (c == fl.end() && !wasAdded)
        fl.insert_after(p, s2);
}

int main(int argc, char *argv[]) {
    forward_list<string> slst{"ab", "bc", "cd"};
    for (string i : slst)
        cout << i << endl;

    adder(slst, "ab", "de");

    for (string i : slst)
        cout << i << endl;
    return 0;
}
