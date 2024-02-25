#include <iostream>
#include <vector>

using namespace std;


int main (int argc, char *argv[]) {
    vector<int> ivec (500000, 5);
    cout << ivec.size() << " " << ivec.capacity() << endl;
    ivec.insert(ivec.end(), 10000000, 5);
    cout << ivec.size() << " " << ivec.capacity() << endl;
    ivec.insert(ivec.end(), 100000000, 5);
    cout << ivec.size() << " " << ivec.capacity() << endl;
    ivec.push_back(2);
    cout << ivec.size() << " " << ivec.capacity() << endl;
    return 0;
}
