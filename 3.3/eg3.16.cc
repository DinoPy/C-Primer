#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

template <typename T>
void print_vector(vector<T> v) {
    for (auto i : v)
        cout << i;
    cout << "\n" << "Size: " << v.size() << endl;
}

int main() {
    vector<int> v1; // empty vector
    vector<int> v2 (10); //vector initialized with 10 default initialized elements, it should have 10 0s
    vector<int> v3 (10, 42); // initialized with 10 elements all having the value 42
    vector<int> v4{10}; // 1 element - 10- list initialized, matching type;
    vector<int> v5{10, 42}; // 2 elements - 10 and 42 - list inititialized, matching type;
    vector<string> v6{10}; // list initialized with 10 empty strings - type not matching the compiler searches for alternative initialization
    vector<string> v7{10,"hi"}; // list initialized with 10 elements with value "hi"

    print_vector(v1); // will output nothing and size 0
    print_vector(v2); // will output 10 of 0 value and size 10
    print_vector(v3); // will ouput 10 of 42 value and size 10
    print_vector(v4); // will output 10 (1 element) and size 1;
    print_vector(v5); // will output 10 and 42 and size 2;
    print_vector(v6); // will output nothing and size 10;
    print_vector(v7); // will output "hi" 10 times.
    return 0;
}