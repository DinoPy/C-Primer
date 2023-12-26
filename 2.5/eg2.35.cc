#include <iostream>

int main() {
    /*
    Exercise 2.35: Determine the types dedeced in each of the following definitions. 
    Once you've figured out the types, write a program to see whether you were corect.
    */
   const int i = 42; // const int
   auto j = i;  // int;
   const auto &k = i; // const reference to const int;
   auto *p = &i; // pointer to const int;
   const auto j2 = i, &k2 = i; // const int j2, reference to const int;

}