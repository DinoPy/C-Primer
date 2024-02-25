#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using namespace std;

int main(int argc, char *argv[]) {
    forward_list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin(), prev = vi.before_begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert_after(iter, *iter);
            prev = iter;
            ++iter;
        } else
            iter = vi.erase_after(prev);
    }

    for (const auto &i : vi)
        cout << i << endl;
    return 0;
}


// list iterators does not offer compound assignment
