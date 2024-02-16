#include <vector>

using std::vector;

int main (int argc, char *argv[]) {
    vector<int> v1;
    const vector<int> v2;
    auto it1 = v1.begin();
    auto it2 = v2.begin();
    auto it3 = v1.cbegin(), it4 = v2.cbegin();

    /*
     * it1 = iterator
     * it2 = const_iterator
     * it3 = const_iterator
     * it4 = const_iterator
     */

    return 0;
}
