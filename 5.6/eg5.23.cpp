#include <iostream>

int main(int argc, char *argv[]) {
  int num1, num2;

    char answer = 'y';
  while (answer == 'y') {
      answer = 'n';
      std::cout << " Type two numbers to be divided" << std::endl;
      std::cin >> num1 >> num2;
    try {
      if (num2 == 0)
        throw std::runtime_error("The number you divide with can't be 0!");
    } catch (std::runtime_error err) {
      std::cout << err.what() << std::endl;
      std::cout << "Would you like to try again? Press y for yes and n for no" << std::endl;
      std::cin >> answer;
      if (answer == 'n')
          return -1;
    }
  }
  std::cout << "The difference of your numbers is: " << num1 / num2
            << std::endl;
  return 0;
}
