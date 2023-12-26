#include <iostream>

int main(
{

    return 0
}

/*
    eg1.15.cc:3:9: error: cannot declare ‘::main’ to be a global variable
    3 | int main(
      |         ^
eg1.15.cc:6:5: error: expected primary-expression before ‘return’
    6 |     return 0
      |     ^~~~~~
eg1.15.cc:6:5: error: expected ‘}’ before ‘return’
eg1.15.cc:4:1: note: to match this ‘{’
    4 | {
      | ^
eg1.15.cc:4:2: error: expected ‘)’ before ‘return’
    4 | {
      |  ^
      |  )
    5 | 
    6 |     return 0
      |     ~~~~~~
eg1.15.cc:3:9: note: to match this ‘(’
    3 | int main(
      |         ^
eg1.15.cc:7:1: error: expected declaration before ‘}’ token
    7 | }
      | ^
*/