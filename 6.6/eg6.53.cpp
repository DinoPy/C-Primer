#include <iostream>

using namespace std;

int calc (int&, int&);
int calc (const int&, const int&); // the const is top level which creates an overloaded function that can both const char* and char* which will be converted to const. This function won't be called for non-const int&, int& because there is a function with the same name that takes non const int&, int&.

int calc (char*, char*);
int calc (const char*, const char*); // the same situation as above. The const is top level hence this function will be an overloaded function that will take const char*. It could take char* as well through const conversion but won't as there is a function with the same name that takes non const arguments.

int calc (char*, char*);
int calc (char* const, char* const); // the second function uses low level const which does not affect the ranking in the selection of the overloaded function that's called. In this example the 2nd function acts as a duplicate, replacement for the first.

int main (int argc, char *argv[]) {

    return 0;
}
