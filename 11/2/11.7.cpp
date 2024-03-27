#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <sstream>

int main (int argc, char *argv[]) {
    std::map<std::string, std::vector<std::string>> families;

    std::string family;
    while (std::getline(std::cin, family)) {
        std::string word;

        std::istringstream famStream (family);
        std::string name;
        famStream >> name;

        while (famStream >> word) {
            families[name].push_back(word);
        }
    }

    for (const auto &i : families) {
        std::cout << i.first << std::endl;
    }
    return 0;
}
