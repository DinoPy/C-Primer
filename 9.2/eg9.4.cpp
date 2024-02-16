#include <vector>
#include <iostream>

using std::vector;
using std::cout; using std::endl;

bool compare(vector<int>::iterator begin, vector<int>::iterator end, int val) {
    while (begin != end) {
        if (*begin == val)
            return true;
        ++begin;
    }
    return false;
}

int main (int argc, char *argv[]) {
    vector<int> vec = {1, 2, 3, 4, 5, 11};
    cout << compare(vec.begin(), vec.end(), 6) << endl;
    return 0;
}
