#include <iostream>
#include <fstream>

using std::endl; using std::ends; using std::flush;
using std::cout; using std::endl;
using std::ofstream;

void print(std::ostream &os) {
    os << "print";
};

int main (int argc, char *argv[]) {
    ofstream fo("./file");

    cout << "hi!" << endl;
    cout << "hi!" << flush;
    cout << "hi!" << ends;
    return 0;

    std::cin.tie(&cout);
    print(std::cout);
    print(fo);

}

