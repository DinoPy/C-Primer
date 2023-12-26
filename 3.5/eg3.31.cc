#include <iostream>
#include <cstddef>
#include <vector>

int main() {
    size_t arr_length = 10;
    int arr[arr_length];
    for (size_t i = 0; i < arr_length; i += 1)
        arr[i] = i;

    for (int i : arr)
        std::cout << i << std::endl;

    // exercise 3.32
    int arr2[arr_length];
    for (size_t i = 0; i < arr_length; i+= 1) {
        arr2[i] = arr[i];
    }

    std::vector<int> ivec;
    for (int i : arr2) {
        ivec.push_back(i);
        std::cout << i << std::endl;
    }

    for (auto i = ivec.begin(), e = ivec.end(); i != e; ++i)
        std::cout << *i << std::endl;
    return 0;
}
