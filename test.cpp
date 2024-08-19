#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
    std::vector<int> ivec{1, 2, 3, 4, 5};
    std::vector<int>::iterator begin = ivec.begin();

    while (begin != ivec.end()) {
        int current = *begin;
        *begin = current * 2;
        ++begin;
    }

    std::cout << ivec.size() << std::endl;
    for (int i : ivec)
        std::cout << i << std::endl;
    return 0;
}
