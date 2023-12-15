#include <iostream>
#include <cassert>

using namespace std;

int main (int argc, char *argv[]) {
    string s;
    string sought = "whatever";
    cout << !!cin << endl;
    assert (cin >> s);
    while (cin >> s && s != sought) {
    }
    return 0;
}

// the assert(cin) will test forfilename the status of the input stream while the intention might have been to test if there are values left to write.
