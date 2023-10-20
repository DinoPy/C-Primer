#include <iostream>
#include <iterator>

void loop_array_marker (int *arr) {
    while (*arr)
        std::cout << *arr++ << std::endl;
}

void loop_array_stdlib(int *beg, int *end) {
    while (beg != end)
        std::cout << *beg++ << std::endl;
}

void loop_array_sizeint(int *arr, std::size_t length) {
    for (std::size_t i = 0; i < length; ++i)
        std::cout << arr[i] << std::endl;
}

int main (int argc, char *argv[]) {
    int i = 0, j[2] = {0, 1};
    loop_array_marker(j);
    loop_array_stdlib(std::begin(j), std::end(j));
    loop_array_sizeint(j, 2);
    return 0;
}
