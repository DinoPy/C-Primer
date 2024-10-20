#include <iostream>
#include <string>


int main (int argc, char *argv[]) {
    std::string input = "";
    std::cin >> input;
    const size_t length = input.size();
    /*char c_str[length] = (input.c_str());*/
    std::cout << input << std::endl;
    return 0;
}
