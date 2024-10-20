#include <memory>
#include <iostream>
#include <string>
#include <string.h>

int main(int argc, char *argv[]) {
    const char* str1 = "bla";
    const char* str2 = "bla";

    std::unique_ptr<char []> concat_result (new char[10]);
    strcpy(concat_result.get(), str1);
    strcat(concat_result.get(), str2);

    std::string a = str1;
    std::string b = str2;
    std::unique_ptr<std::string> str_ptr;
    *str_ptr = a + b;


    std::cout << concat_result.get() << std::endl;
    std::cout << concat_result.get() << std::endl;
    std::cout << str_ptr << std::endl;
    return 0;
}

/// THERE SEEMS TO BE AN ERROR WITH THE g++ COMPILER AFTER MAC UPDATE
