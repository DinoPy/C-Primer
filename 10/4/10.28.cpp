#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <list>

template <typename T> void print(T &v) {
    for (const auto &i : v)
        std::cout << i << " ";
    std::cout << std::endl;
}

int main(int argc, char *argv[]) {
    std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> ivec2, ivec3;
    std::list<int> lst;

    std::copy (ivec.cbegin(), ivec.cend(), std::back_inserter(ivec2));
    std::copy (ivec.cbegin(), ivec.cend(), std::front_inserter(lst));
    std::copy (ivec.cbegin(), ivec.cend(), std::inserter(ivec3, ivec3.end()));

    print (ivec);
    print (ivec2);
    print (lst);
    print (ivec3);
    return 0;
}
