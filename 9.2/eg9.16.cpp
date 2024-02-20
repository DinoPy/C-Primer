#include <iostream>
#include <list>
#include <vector>

int main(int argc, char *argv[]) {
    std::list<int> l1 (10, 1);
    std::vector<int> v1 (10, 1);

    std::cout << (l1 == std::list<int>(v1.cbegin(), v1.cend())) << std::endl;
    return 0;
}
