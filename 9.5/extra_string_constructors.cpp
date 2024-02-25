#include <iostream>
#include <string>

using std::string;
using std::cout; using std::endl;

int main(int argc, char *argv[]) {
    char cp[] = {'a', 'b', 'c', 'd'};
    const char *cp2 = "Hello World!!!";
    string s(cp2, 4);
    cout << s << endl;
    string s2(s,2);
    cout << s2 << endl;
    string s3(s, 1, 2);
    cout << s3 << endl;

    s.insert(0, s2, 0, s2.size());
    cout << s << endl;

    return 0;
}
