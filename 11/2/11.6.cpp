#include <iostream>
#include <list>
#include <set>
#include <string>

int main (int argc, char *argv[]) {
    std::list<std::string> slist = { "one", "two", "three" };
    std::set<std::string> sset = { "one", "two", "three" };

    return 0;
}

// Set:
// Associative container, stores unique elements, sorted, does not allow duplicates
// List:
// Sequential container, allow duplicate elements, not sorted
