#include <fstream>
#include <istream>
#include <iostream>
#include <vector>
#include <sstream>

int main (int argc, char *argv[]) {
    if (argc != 3)
        std::cout << "Usage: ./program in out" << std::endl;

    std::ifstream ifs(argv[1]);
    if (!ifs) std::cerr << "Invalid file" << std::endl;
    std::string line;

    while (getline(ifs, line)) {
        std::istringstream s(line);
        std::string innerString;
        while ( s >> innerString) {
            std::cout << innerString << std::endl;
        }
    }
    return 0;
}
