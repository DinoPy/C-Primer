#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cout; using std::endl;

int main() {
    const char c1[] = "What a string?!", c2[] = "Nopee old style string";
    const int len = (sizeof(c1)/sizeof(char)) + (sizeof(c2)/sizeof(char)) - 1;
    char c3[len] = "";
    strcat(c3, c1);
    strcat(c3, c2);
    cout << c3 << endl;
    return 0;
}
