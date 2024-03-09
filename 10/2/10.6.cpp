#include <algorithm>
#include <iostream>

int main(int argc, char *argv[]) {
    int arr[] = {1, 2, 3, 4, 5};
    std::fill_n(std::begin(arr), 5, 0);
    auto start = std::begin(arr);
    while (start != std::end(arr)) {
        std::cout << *start << std::endl;
        ++start;
    }
    return 0;
}
