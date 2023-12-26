/*
    Exercise 2.28: Explain the following definitions. Identify any that are illegal.
(a) int i, *const cp; (b) int *p1, *const p2; (c) const int ic, &r = ic; (d) const int *const p3; (e) const int *p;

a. Illegal as const need to be initialized
b. Illegal as const need to be initialized 
c. Illegal as const need to be initialized 
d. Illegal as const need to be initialized 
e. Legal as pointer p can be changed to point to a different object.

*/

int main () {
    int i , *const cp;
    int *p1, *const p2;
    const int ic, &r = ic;
    const int *const p3;
    const int *p;
}