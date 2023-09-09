#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<int> ivec(10, 1);
    // vector<Sales_item> Sales_vec;
    vector<vector<string>> file;

    for (int i : ivec) {
        cout << i << endl;
    }

    return 0;
}