#include <iostream>

void swapPointers ( int *(&p1),  int *(&p2)) {
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}

int main (int argc, char *argv[]) {
    int ab = 10, ba = 11;
    int *a = &ab, *b = &ba;
    std::cout << a << "   " << b << std::endl;
    swapPointers(a, b);
    std::cout << a << "   " << b << std::endl;
    return 0;
}
