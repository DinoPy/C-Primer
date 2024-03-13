#include <iostream>
#include <vector>


int main (int argc, char *argv[]) {
    std::vector<int> ivec {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto end = ivec.cbegin() + ivec.size() - 1;
    while (ivec.cbegin() != end)
        std::cout << *end-- << std::endl;
    std::cout << *end << std::endl;
    return 0;
}
