#include <iostream>

int testFunct (int data) {

    return 0;
}

int main ()
{
    testFunct("string");
    return 0;
}

/*
eg1.15.5.cc:3:20: note:   initializing argument 1 of ‘int testFunct(int)’
    3 | int testFunct (int data) {
      |       
*/