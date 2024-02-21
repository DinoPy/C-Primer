#include <iostream>
#include <vector>
#include <string>

int main (int argc, char *argv[]) {
    std::vector<std::string> svec;
    std::string word;
    auto iter = svec.begin();
    while(std::cin >> word)
        iter = svec.insert(iter, word);

    for (auto s : svec)
        std::cout << s << std::endl;
    return 0;
}

// the loop will work exactly the same as with a list
// firstly we get an iterator to the fist element, which to begin with does not exist.
// then we insert at first location the read string, and assign the returned iterator to iter. The returned iterator will point to the element that was added which is the first.
// the process repeats until there are no more strings in the buffer to read.
//
