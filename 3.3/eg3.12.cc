#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<vector<int>> ivec; // will create a vector that contains vectors with values of type integer default initialized;
    // vector<string> svec = ivec; // won't work because we can't copy the vector of vectors into a vector with values of type string
    vector<string> svec (10, "null"); // will create a vector with 10 values all "null"
}