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
    auto length = ivec.size();
    cout << "vector length " << length << endl;
    for (unsigned i = 0; i < length; i += 2) {
        if (i == length - 1 && (i + 1) % 2 > 0)
            cout << ivec[i] << " has no pair" << endl;
        else 
            cout << ivec[i] + ivec[i+1] << endl;
    }
    for (unsigned i = 0; i <= length/2; i += 1) {
        if (i * 2 + 1 == length)
            cout << ivec[i] << " has no pair" << endl;
        else
            cout << ivec[i] + ivec[length - i - 1] << endl;
    }
    return 0;
}