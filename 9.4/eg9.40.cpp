#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    vector<string> svec; // 0 size 0 capacity vector of strings;
    svec.reserve(10); // we reserve space for 1024 elements; However the string is a vector itself
    cout << svec.capacity() << endl;
    string word; // empty string
    unsigned index = 0;
    while (index < 1048) { // read from standard input to string
        svec.push_back(word); // push into the vector the new string
        cout << svec.capacity() << " " <<  svec.size() << endl;
        ++index;
    }
    svec.resize(svec.size() + svec.size() / 2); // finally get the size of the vector and add size / 2 more elements to the vector.
                                                // this will not affect the capacity unless the new size is larger than the capacity.
    cout << svec.capacity() << " " <<  svec.size() << endl;
    return 0;
}

// if the progrm reads:
// 256 words the capacity after resize will be 640.
// 512 -> capacity = 1280
// 1000 -> capacity = 2560
// 1048 -> capacity = 2560
