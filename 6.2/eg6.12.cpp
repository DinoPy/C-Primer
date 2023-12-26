#include <iostream>

void swapRef(int &num1, int &num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

void swapPnt(int *num1, int *num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

int main(int argc, char *argv[]) {
  int num1 = 1, num2 = 2;
  swapRef(num1, num2);
  swapPnt(&num1, &num2);
  std::cout << num1 << "    " << num2 << std::endl;
  return 0;
}



/*
 * both variants with pointers and references are easy to use as long as there is a little
 * bit of understanding of pointers and one does not forget to dereference and pass addresses
 * while I find both fine it is clear that references are easier to use and less error prone
 */
