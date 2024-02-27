#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[]) {
    list<string> lst;
    string val;
    while (cin >> val) {
        lst.push_back(val);
    }

    cout << count(lst.cbegin(), lst.cend(), val) << endl;
    return 0;
}
