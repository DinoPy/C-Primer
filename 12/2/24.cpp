#include <iostream>
#include <string>
#include <string.h>


int main (int argc, char *argv[]) {
    std::string input = "";
    std::cin >> input;
    const size_t length = input.size();
    char* c_str= new char[length]; 
    strcpy(c_str,input.c_str());
    std::cout << c_str << std::endl;
    delete[] c_str;
    return 0;
}

// Given that there was no mention again using a regular string as a helper 
// I am using a string to read the contents of the input 
// then copy the results in a c string.