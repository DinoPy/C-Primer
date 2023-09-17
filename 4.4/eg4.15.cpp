#include <iostream>

int main() {
    double dval; int ival; int *pi;
    dval = ival = pi = 0; // to correct the error we dereference the pointer. A pointer type can not be assigned to a non compound type.
    return 0;
}
