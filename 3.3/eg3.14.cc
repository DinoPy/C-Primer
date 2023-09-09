#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<int> ivec;
    int input;
    while (cin >> input)
        ivec.push_back(input);

    for (int i : ivec)
        cout << i << endl;
    return 0;
}