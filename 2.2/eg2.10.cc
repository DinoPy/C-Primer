#include <iostream>

std::string global_str; // should be initialized to "" as std::string class estrblished.
int global_ing; // should be initialized to 0;
// for both of the above they are "outside any function body" hence their values;

int main () {
    int local_int; // will be undefined.
    std::string local_str; // should be "" as well as the class will define the initializer value.
}