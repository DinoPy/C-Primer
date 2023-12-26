#include <iostream>

int main() {
  const char *cp = "Hello World";
  if (cp && *cp)
    std::cout << "Yes" << std::endl;

  /*
   * The if will first evaluate if the pointer is valid, that is if it points to
   * a valid memory address If the pointer is valid then then we evaluate the
   * dereferenced pointed = the value of the variable If the string is empty it
   * will return false else it will return true.
   */

  return 0;
}
