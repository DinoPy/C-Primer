#include <iostream>

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int *b = arr, *e = arr + 10;
    while (b < e) {
        *b = 0;
        std::cout << *b << std::endl;
        ++b;
    }
}
