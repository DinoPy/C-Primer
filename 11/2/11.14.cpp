#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

int main(int argc, char *argv[]) {
    std::map<std::string, std::vector<std::pair<std::string, std::string>>>
        families;

    std::string family;
    while (std::getline(std::cin, family)) {
        std::string word;

        std::istringstream famStream(family);
        std::string name;
        famStream >> name;

        while (famStream >> word) {
            families[name].push_back(std::make_pair(
                word, word)); // imagine the 2nd word has a different content.
                              // there is no point in correcting the program
                              // without specific requirements of the format.
        }
    }

    for (const auto &i : families) {
        std::cout << i.first << std::endl;
    }
    return 0;
}
