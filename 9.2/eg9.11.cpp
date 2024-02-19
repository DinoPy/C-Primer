#include <vector>

using std::vector;

int main (int argc, char *argv[]) {

    vector<int> v1; // v1 has a size 0.
    vector<int> v2 (10); // size initialization, the vector has 10 elements, ints default initialized (0)
    vector<int> v3 (10, 9); // v3 has 10 elements with value 9.
    vector<int> v4 {1,2,3}; // list initialization, the vector will have the exact elements as in the list.
    vector<int> v5 (v2); // copy initialization, v5 copies the elements of v2;
    vector<int> v6 (v2.begin(), v2.end()); // iterator range initialization, v6 copy the elements in the given range.

    return 0;
}
