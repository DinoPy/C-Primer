#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char *argv[]) {
    vector<int> ivec (25, 5);
    // ivec.resize(100) will add 75 more elements to the end of the container. The elements are value initialized.
    // ivec.resize(10) will remove any element past the 10th from the container.
    return 0;
}
