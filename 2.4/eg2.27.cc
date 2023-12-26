/*
Exercise 2.27: Which of the following initializations are legal? Explain why.
(a) inti=-1,&r=0; (b) int*constp2=&i2;
(c) constinti=-1,&r=0; (d) constint*constp3=&i2; (e) const int *p1 = &i2; (f) const int &const r2;
(g) constinti2=i,&r=i;

a. Illegal as &r = 0; can't be bound to a literal unless const is used.
b. Legal as p2 is a constant pointer to a constant int object.
c. Legal as const int is used to initialize both i and &r that's being bind to a literal.
d. Legal as the pointer p3 is a const pointer and the variable it points to is a const as well so both top and low levep const are used.
e. Legal as a normal pointer can be linked to a const variable but can't change it.
f. Illegal any reference needs to be initialized.
g. Legal as i2 is a const int and &r is a reference to a const int i.
*/

#include <iostream>

int main () {
    int i = -1; // &r = 0;
    const int i2 = i, &r = i;
    const int i = -1, &r = 0;
    const int *const p2 = &i2;
    const int *p1 = &i2;
    const int &r2 = i;
    const int &const r2 = i2;
    return 0;
}