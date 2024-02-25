#ifndef CONSTANTS
#include <fstream>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

string ASCENDERS = "bdfhkit";
string DESCENDERS = "gjpqy";

#endif

int main(int argc, char *argv[]) {
    ifstream input("eg9.49.txt");
    string current;
    string longest_word = "";

    while (getline(input, current)) {
        string::size_type index = 0;

        string::size_type ascenders_found = current.find_first_of(ASCENDERS);
        string::size_type descenders_found = current.find_first_of(DESCENDERS);

        if (ascenders_found == string::npos && descenders_found == string::npos)
            if (longest_word.size() < current.size())
                longest_word = current;
    }

    cout << longest_word << endl;
    return 0;
}
