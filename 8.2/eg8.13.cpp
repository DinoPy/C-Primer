#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using std::string;
using std::vector;
using std::ifstream;
using std::istringstream;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main (int argc, char *argv[]) {
    ifstream ifs("./people.txt");
    string line, word;
    vector<PersonInfo> people;

    while (getline(ifs, line)) {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        std::cout << info.name << std::endl;
        while (record >> word) {
            std::cout << word << std::endl;
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    return 0;
}
