#include <iostream>
#include <list>
#include <algorithm>

int main (int argc, char *argv[]) {
    std::list<int> ilist {0, 1, 3, 0, 11, 2, 0, 13, 6, 98};
    auto found = std::find(ilist.crbegin(), ilist.crend(), 0);

    std::cout << *found  << std::endl;
    return 0;
}
