#include <iostream>

int main() {
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;
    // auto &h = 42;
    const auto &j = 42;
    auto k = ci, &l = i;
    auto &m = ci, *p = &ci;
    
    /*
    Exercise 2.33: Using the variable definitions from this section, determine what
    happens in each of these assignments:
    a = 42;  b = 42;   c = 42;
    d = 42;  e = 42;   g = 42; 

    a -  a is assigned the value 42 as it is an int;
    b -  b is an int as well and is assigned the value 42;
    c -  c is an int as well, and given that the const in both ci and cr are top level they are ignored
    d -  d holds the address of i which makes it a pointer and so literal 42 can't replace a memory address.
    e -  e is a const int, can't be reassigned.
    g -  g is a reference to a const int and can't be used to change the value of the original variable.


    ex 2.34 - the answers are correct as they are based on LSP
    */
   a = 42;
   b = 42;
   c = 42;
   d = 42;
   e = 42;
   g = 42;

}