#include <list>
#include <map>
#include <vector>

int main(int argc, char *argv[]) {
    std::map<std::vector<int>::iterator, int> ref;
    std::map<std::list<int>::iterator, int> ref2;

    return 0;
}

// syntactically both options seem to work however per ordered container key
// requirmement the key must support  < operation. the vector returns a random
// access iterator that supports that operation while the list returns a
// bi-directional iterator that does not.
// hence the list iterator cannot be used as a key.
