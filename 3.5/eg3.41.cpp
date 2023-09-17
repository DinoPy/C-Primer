#include <iostream>
#include <iterator>
#include <vector>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> v1 (std::begin(arr), std::end(arr));

    // eg3.42
    const int vLen = v1.size();
    int arr1[vLen];

    for (unsigned i = 0; i < vLen; ++i)
        arr1[i] = v1[i];
    for (int i : arr1)
        std::cout << i << std::endl;
}
