#include <algorithm>
#include <vector>
#include <iostream>
#include <list>

int main (int argc, char *argv[]) {
    std::vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> ilst (ivec.crbegin() + 3, ivec.crbegin() + 7);

    for (const auto &i : ilst)
        std::cout << i << std::endl;
    return 0;
}
