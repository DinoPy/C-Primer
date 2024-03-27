#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>


int main (int argc, char *argv[]) {
    std::vector<std::string> excluded = { "the", "an", "with" };
    std::map<std::string, std::size_t> wordCount;

    std::string word;
    while (std::cin >> word) {
        if (std::find(excluded.cbegin(), excluded.cend(), word) == excluded.cend())
            ++wordCount[word];
    }

    for (const auto &i : wordCount)
        std::cout << i.first << " value: " << i.second << std::endl;

    return 0;
}


//the benefits of using a set over a vector:
//the data is sorted.
//it has own utility functions that allow checking.
//

