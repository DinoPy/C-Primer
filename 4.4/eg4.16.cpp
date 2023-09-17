#include <iostream>

int main() {
    // if (p = getPtr() != 0) // as the assignment is low precedence the comparison between getPtr() and 0 is done first and the result is assigned to p which is then evaluated by the if.
    // correction: if ((p = getPtr()) != 0);
    // if (i = 1024) // i is assigned the value of 1024 which is then evaluated by the if. The code is functional but the compiler will complain, to fix this we need to surround the assignment with parantesis then the result is evaluated. It is the same thing but more readable and clear.
    // correction: if((i = 1024))
    // OR
    // if we want to compare i with 1024 then we need == operator not assignment one =.
    // correction: if(i == 1024)
}
