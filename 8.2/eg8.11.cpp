#include <string>
#include <sstream>
#include <iostream>
#include <fstream>

struct PersonInfo {
    std::string name;
    std::vector<std::string> phones;
};

void funct() {
    std::ifstream ifs("./bookstore.txt");
    std::string line, word;
    std::vector<PersonInfo> people;
    getline(ifs, line);
    std::istringstream record(line);

    while (getline(ifs, line)) {
        PersonInfo info;
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
}

int main (int argc, char *argv[]) {
    funct();
    return 0;
}
