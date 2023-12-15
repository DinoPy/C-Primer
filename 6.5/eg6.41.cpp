#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout; using std::cin; using std::endl;
using std::cout; using std::endl; using std::cin;

char *init (int ht, int wd = 80, char bckgrnd = ' ');

int main (int argc, char *argv[]) {
    init(); // the ht variable does not have a default argument and as a result an argument must be passed.
    init(24,10); // the call is valid, ht is 24, wd is 10 and bkcgrnd is the default ' ';
    init(14, '*'); // the call is valid but does not match the progrmmer intent - ht will be 14 and '*''s ascii value will be converted to int and used to initialize 80. The programmers intention is most likely to use '*' as bckgrnd;

    return 0;
}
