#include <iostream>

int main() {
    auto result =  12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    std::cout << result << std::endl;

    auto result2 = ((12/3)*4) + (5*15) + ((24 % 4) / 2);
    std::cout << result2 << std::endl;

    return 0;
}

