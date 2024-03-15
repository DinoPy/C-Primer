// Extend your program to ignore case and punctuation. For example, “example.” “example,” and “Example” should all increment the same counter.

#include <iostream>
#include <map>
#include <set>

int main(int argc, char *argv[]) {
    std::map<std::string, std::size_t> data;
    std::set<std::string> exclude = {"The", "But", "And", "Or", "An", "A",
                                     "the", "but", "and", "or", "an", "a"};
    std::string word;
    while (std::cin >> word) {
        if (exclude.find(word) == exclude.end())
            ++data[word];
    }

    for (const auto &s : data)
        std::cout << s.first << " occurs " << s.second << std::endl;
    return 0;
}
