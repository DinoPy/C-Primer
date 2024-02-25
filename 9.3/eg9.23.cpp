#include <vector>

int main (int argc, char *argv[]) {
    std::vector<int> c {1};

    if (!c.empty()) {
        auto val = *c.begin(), val2 = c.front();
        auto last = c.end();
        auto val3 = *(--last);
        auto val4 = c.back();
    }
    return 0;
}


// The value of all 4 variables would be the same. Val is a dereferenced iterator to the fist element, val2 is a reference to the first element, last is a reference to one past the last (in this case also first) element
// val3 is a dereferenced the last iterator, decreased by one which moves the iterator to the last element (also first), val4 is a reference to the last element also the first.
