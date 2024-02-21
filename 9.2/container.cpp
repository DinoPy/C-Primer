#include <iostream>
#include <vector>
#include <list>

int main (int argc, char *argv[]) {
    int i = 1;
    int j = 2;

    std::vector<int *> ivec {&i, &j};
    std::vector<int *> ivec2 = ivec;
    std::list<int *> list {&i, &j};

    ivec.insert(ivec.end(), ivec2.begin(), ivec2.end());
    ivec.insert(ivec.end(), list.begin(), list.end());

    *ivec[1] = 11;

    for (auto i : ivec)
        std::cout << *i << std::endl;
    std::cout << ivec.max_size() << std::endl;
    return 0;
}
