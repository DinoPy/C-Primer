#include <iostream>
#include <string>

using std::cin;
using std::string;

int main (int argc, char *argv[])
{
    string input;
    int vowels = 0;
    while (cin >> input) {
        for (char c : input) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                ++vowels;
        }
    }

    std::cout << "The total number of values located is: " << vowels << std::endl;

    return 0;
}
