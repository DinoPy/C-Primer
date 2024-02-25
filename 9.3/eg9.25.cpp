#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
    vector<int> ivec {1,2,3,4,5};
    vector<int>::iterator b = ivec.begin(), e = ivec.end();
    vector<int>::iterator ib = ivec.erase(ivec.end(), ivec.end());
    cout << *ib << endl;
    cout << ivec.size() << " " << *ivec.end() << endl;

    return 0;
}

// if element1 and element2 are equal no change will ocurr with the container, and the iterator itself will be returned.
// if element2 if off the end iterator, as long as element1 is not (references an element before it) then that section will be erased
// if both elements ae off the end iterators then no change will happen with the container and an iterator pointing at the last element will be retuned.
