#include <list>
#include <deque>
#include <iostream>

using std::deque;
using std::list;

int main (int argc, char *argv[]) {
    list<int> lst {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> odd, even;

    for (auto b = lst.cbegin(); b != lst.cend(); ++b) {
        if (*b % 2 == 0)
            even.push_back(*b);
        else
            odd.push_back(*b);
    }

    for (int i : odd)
        std::cout << i << std::endl;
    for (int i : even)
        std::cout << i << std::endl;
    return 0;
}
