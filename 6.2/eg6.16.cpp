#include <iostream>

bool is_empty(string &s) { return s.empty(); } // this function asks for a non-const string hence it limits the number of arguments it can recive. We can pass a non-const to a function that expects a const (but we cannot change the value) but we cannot pass a const to a function that expects a non-const.

int main (int argc, char *argv[]) {

    return 0;
}
