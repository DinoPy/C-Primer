#include <iostream>

int main (int argc, char *argv[]) {
    int num = 5;
    auto funct = [num] (int i) -> int {
        return num + i;
    };

    std::cout << funct(10) << std::endl;
    return 0;
}
