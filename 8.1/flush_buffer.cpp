#include <iostream>
using std::endl; using std::ends; using std::flush;
using std::cout; using std::endl;

int main (int argc, char *argv[]) {

    cout << "hi!" << endl;
    cout << "hi!" << flush;
    cout << "hi!" << ends;
    return 0;

    std::cin.tie(&cout);
}

