#include <iostream>
#include <cstddef>
int main() {
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix <= array_size; ++ix) {
        ia[ix] = ix;
    }
    for (int element : ia)
        std::cout << element << std::endl;
    return 0;
}
    // The indexing starts with 1 and not 0 as it should this would cause the subscript to access 1 past the end of the loop.
    // The last index of the loop should be one smaller than the array_size
