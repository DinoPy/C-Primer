#include <iostream>

int main() {
    int a;
    std::cin >> a;
    if (a % 2 == 0)
        std::cout << "Is even" << std::endl;
    else
        std::cout << "Is odd" << std::endl;
    return 0;
}
