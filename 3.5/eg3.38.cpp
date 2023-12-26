#include <iostream>

int main() {
    // adding to pointers would be meaningless as they can only be added if they point to the same sequence in memory for example the same array of values.
    const char *p1;
    const char *p2;

    std::cout << *(p1 + p2) << std::endl;
    return 0;
}
