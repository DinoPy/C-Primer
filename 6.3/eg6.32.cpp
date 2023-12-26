#include <iostream>

int &get (int *arry, int index) { return arry[index]; }

int main (int argc, char *argv[]) {
   int ia[10];
   for (int i = 0; i != 10; ++i) {
       get (ia, i) = i;
       std::cout << ia[i] << std::endl;
   }
    return 0;
}

// The function is legal and it returns a reference to each index of the array. While looping the value of i is assigned to each i location in the array.
