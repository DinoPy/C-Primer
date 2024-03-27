#include <iostream>
#include <string>
#include <utility>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::pair;
using std::string;
using std::vector;

void print(vector<pair<string, int>> v) {
    for (const auto &i : v) {
        cout <<  i.first << " - " << i.second << endl;
    }
}

int main(int argc, char *argv[]) {
    vector<pair<string, int>> store;
    string first;
    while (cin >> first) {
        int second = 0;
        cin >> second;
        store.push_back(pair<string, int> (first, second));
    }

    print(store);
    return 0;
}
