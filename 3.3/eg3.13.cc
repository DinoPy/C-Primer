#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main() {
    vector<int> v1; // empty vector
    vector<int> v2 (10); //vector initialized with 10 default initialized elements, it should have 10 0s
    vector<int> v3 (10, 42); // initialized with 10 elements all having the value 42
    vector<int> v4{10}; // 1 element - 10- list initialized, matching type;
    vector<int> v5{10, 42}; // 2 elements - 10 and 42 - list inititialized, matching type;
    vector<string> v6{10}; // list initialized with 10 empty strings - type not matching the compiler searches for alternative initialization
    vector<string> v7{10,"hi"}; // list initialized with 10 elements with value "hi"

}