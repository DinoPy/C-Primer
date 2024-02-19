#include <vector>
#include <list>

using std::vector;
using std::list;

int main (int argc, char *argv[]) {
    list<int> l1(10);
    vector<int> v1(10);
    vector<double> v2(l1.begin(), l1.end());
    vector<double> v3(v1.begin(), v1.end());

    return 0;
}
