#include <iostream>
#include <string>
#include <vector>

int main (int argc, char *argv[])
{
    std::string s = "word";
    std::string p1 = s + (s[s.size() - 1] == 's' ? "" : "s"); // the condition had to pe parantesised so the final result could be evaluated along with the s. Without t he parantesis the the binary addition has higher precedence so we would try to add s with the character located at s.size() - 1 and the result would have been used as operand to the condition.
    std::cout << p1 << std::endl;
    return 0;
}
