/*
Exercise 3.28: What are the values in the following arrays?
   string sa[10];
   int ia[10];
   int main() {
       string sa2[10];
       int    ia2[10];
   }
*/

#include <iostream>
#include <string>
using std::string;

string sa[10]; // 10 empty strings - string is a class that defines how the default initialization.
int ia[10]; // 10 0s.

int main (int argc, char *argv[])
{
    string sa2[10]; // 10 empty strings.
    int    ia2[10]; // 10 undefined.
    return 0;
}
