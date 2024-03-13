#include <iostream>
#include <vector>


int main (int argc, char *argv[]) {
    std::vector<int> ivec {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto riter = ivec.crbegin();
    while (riter != ivec.crend())
        std::cout << *riter++ << std::endl;
    return 0;
}
