#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout; using std::endl;

int main(int argc, char *argv[]) {
    vector<char> vc{'a', 'b', 'c', 'd', 'e'};
    string s (vc.begin(), vc.end());
    cout << s << endl;
    return 0;
}
