// for a. The error is that we are using a regular iterator not an insert iterator for the vector.
// using a regular iterator implies that the vector's size is equal or larger than the list
// we copy from. We would have to use a back_inserter to insert instead of assign.
//
// for b. the reserve function will ensure that the capacity is 10 not the size
// the vector can grow until 10 before reallocating but its size is still 0
// using fill_n on that vector assumes that its size is at last 10.
// we also need to use a back_inserter on this one as well.


#include <vector>
#include <algorithm>
#include <iostream>


int main (int argc, char *argv[]) {
    std::vector<int> vec;
    vec.reserve(10);
    std::cout << vec.capacity() << std::endl;
    std::fill_n(std::back_inserter(vec) ,10, 0);


    for (const auto &i : vec)
        std::cout << i << std::endl;
    return 0;
}
