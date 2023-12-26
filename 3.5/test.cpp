#include <cstring>
#include <iostream>
#include <ostream>

template <typename T, int size>
void test(T (&arr)[size]) {
    for(char i : arr)
        std::cout << i << std::endl;
}

int main() {
    char arr[] = {'C', '+', '+'};
    test(arr);
    std::cout << strlen(arr) << std::endl;
    return 0;
}
