#include <iostream>

int main() {
    using int_array = int[4];
    typedef int int_array[4];

    int ia[3][4];
    for (int_array *p = ia; p!= ia + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q)
            std::cout << *q << ' ';
        std::cout << std::endl;
    }
}
