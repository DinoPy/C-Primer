#include <vector>
#include <iostream>

int main (int argc, char *argv[]) {
    std::vector<int> iv (10, 5);
    std::vector<int>::iterator iter = iv.begin(),
        mid = iv.begin() + iv.size() / 2;

    int some_val = 5;
    while (iter != mid) {
        if (*iter == some_val) {
            iv.insert(iter, 2 * some_val);
        }
        ++iter;
    }
    return 0;
}

// iter must be incremented to avoid an infinite loop.
// the issue is that we should not add elements to a sequential container while we loop over it with iterators as it might break the references.
