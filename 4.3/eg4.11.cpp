#include <iostream>

int main() {
    int a = 5, b = 7, c = 6, d = 5;
    if (d < c && c < b && b < a)
        std::cout << "Success" << std::endl;

    return 0;
}
