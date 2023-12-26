#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cout; using std::endl;

int main() {
    string s1 = "Abracadabra", s2 = "Nope";
    char c1[] = {'L', 'O', 'L'}, c2[] = {'N', 'O', 'P', 'E'};
    cout << (s1 == s2) << endl;
    cout << strcmp(c1, c2);

    return 0;
}
