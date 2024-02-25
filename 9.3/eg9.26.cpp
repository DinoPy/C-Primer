#include <iostream>
#include <vector>
#include <list>

using namespace std;


int main (int argc, char *argv[]) {
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
    vector<int> ivec (begin(ia), end(ia));
    list<int> ilst (begin(ia), end(ia));

    auto vb = ivec.begin(), ve = ivec.end();
    auto lb = ilst.begin(), le = ilst.end();

    while ( lb != le) {
        if (*vb % 2) {
            // even
            cout <<"Vector " <<  *vb << " " << *vb % 2 << endl;
            vb = ivec.erase(vb);
            ++lb;
        } else {
            // odd
            cout << "List " << *lb << " " << *lb % 2 << endl;
            lb = ilst.erase(lb);
            ++vb;
        }
    }
    return 0;
}
