#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; // predection: 32
    std::cout << u - u2 << std::endl; // predection: wraped around value 4.200 ish mil.
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // predection: 32
    std::cout << i - i2 << std::endl; // predection: -32
    std::cout << i - u << std::endl; // prediction: 0
    std::cout << u - i << std::endl; //prediction: 0
    return 0;
}