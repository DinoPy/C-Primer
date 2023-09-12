#include <iostream>
#include <cstddef>
#include <vector>
#include <string>

int main() {
    unsigned scores[11] = {};
    unsigned grade;
    while (std::cin >> grade) {
        if (grade <= 100)
            ++scores[grade/10];
    }
}

