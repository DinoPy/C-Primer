// write a fucntion to open a file for intupt and read its contents into a vector of strings, storing each line as a separate element in the vector.

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::ifstream;
using std::string;
using std::vector;

void store_line () {
    vector<string> datacenter;
    ifstream ifs("./iostate.cpp");
    if (ifs) {
        string currentLine;
        while( getline(ifs, currentLine)) {
            datacenter.push_back(currentLine);
        }
    }

    for (auto i : datacenter) {
        std::cout << i << std::endl;
    }
}

void store_word () {
    vector<string> datacenter;
    ifstream ifs("./iostate.cpp");
    if(ifs) {
        string currentWord;
        while (ifs >> currentWord) {
            datacenter.push_back(currentWord);
        }
    }

    for (string i : datacenter) {
        std::cout << i << std::endl;
    }
}

int main (int argc, char *argv[]) {
    store_line();
    store_word();
    return 0;
}
