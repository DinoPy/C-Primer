#include <iostream>

int main() {
    int i; double d;
    d = i = 3.5; // 3.5 is truncated to 3 for the int and then the 3 is assigned to d which becomes 3.0 as a float.
    i = d = 3.5; // 3.5 is assigned to d and truncated to 3 for i;

}
