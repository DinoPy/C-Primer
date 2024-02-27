#include <algorithm>
#include <iostream>
#include <vector>

using std::count;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[]) {
    vector<int> arr = {1, 1, 2, 3, 4, 4, 4, 4, 5, 6, 6};
    cout << count(arr.cbegin(), arr.cend(), 6) << endl;
    return 0;
}
