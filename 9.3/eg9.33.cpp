#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    vector<int>::iterator begin = v.begin();

    while (begin != v.end()) {
        ++begin;
        cout << *begin << endl;
        begin = v.insert(begin, 42);
        cout << *begin << endl;
        ++begin;
    }

    for (const auto &i : v)
        cout << i << endl;

    return 0;
}


// because insert in a vector adds before the element the iterator points to, any iterator, pointer or reference pointing to any elements past the one that was added is invalidated.
// because of the invalidation ++begin; won't have any effect as begin no longer point to an element in the container.
