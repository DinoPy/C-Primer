#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector; using std::next;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<int> ivec;
    int input;
    while (cin >> input)
        ivec.push_back(input);
    auto length = ivec.size();
    cout << "vector length " << length << endl;
    // for (unsigned i = 0; i < length; i += 2) {
    //     if (i == length - 1 && (i + 1) % 2 > 0)
    //         cout << ivec[i] << " has no pair" << endl;
    //     else
    //         cout << ivec[i] + ivec[i+1] << endl;
    // }
    for (auto beg = ivec.begin(), end = ivec.end(); beg < end; beg += 2 ) {
        if (next(beg) != end)
            cout << *beg + *(next(beg)) << endl;
        else
            cout << *beg << " has no pair" << endl;
    }

    cout << "Next loop" << endl;

    // for (unsigned i = 0; i <= length/2; i += 1) {
    //     if (i * 2 + 1 == length)
    //         cout << ivec[i] << " has no pair" << endl;
    //     else
    //         cout << ivec[i] + ivec[length - i - 1] << endl;
    // }
    for(auto beg = ivec.begin(), end = ivec.end() - 1; beg <= end; ++beg, --end) {
        if (beg < end)
            cout << *beg + *end << endl;
        else
            cout << *beg << " has no pair" << endl;
    }
    return 0;
}
