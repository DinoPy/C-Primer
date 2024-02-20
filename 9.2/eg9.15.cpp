#include <iostream>
#include <vector>

int main (int argc, char *argv[]) {
    std::vector<int> v1 (10, 1);
    std::vector<int> v2 (10, 1);

    std::cout << v1.size() << std::endl;
    std::cout << (v1 == v2) << std::endl;
    return 0;
}
