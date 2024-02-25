#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin(); // callbegin,notcbeginbecausewe’rechangingvi
    while (iter != vi.end()) {
        if (*iter % 2) {
            cout << *iter << endl;
            iter = vi.insert(iter, *iter++); // duplicate the current element
            cout << *iter << endl;
        } else
            iter = vi.erase(iter); // remove even elements
    }
    return 0;
}
