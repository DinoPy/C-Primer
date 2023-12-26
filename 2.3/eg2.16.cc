/*
Exercise 2.16: Which, if any, of the following assignments are invalid? If they are
valid, explain what they do.
int i = 0, &r1 = i; double d = 0, &r2 = d; (a) r2 = 3.14159; (b) r2 = r1;
(c) i=r2; (d) r1=d;

a. r2 updates the value of d as it is bound to it.
b. the value of d to which r2 is bound by reference is updated to the value of i to which r1 is bound by reference.
c. i is being assigned value of 0 from r2 and respectively d.
d. r1 is assigned the value of d which is 0;
*/