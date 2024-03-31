#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main (int argc, char *argv[]) {
    map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An", "A",
                        "the", "but", "and", "or", "an", "a" };
    string word;
    while (cin >> word) {
        if (exclude.find(word) == exclude.end()) {
            ++word_count[word];
            auto ret = word_count.insert({word, 1});
            if (!ret.second)
                ++ret.first->second;
        }
    }
    return 0;
}


/*
 * The previous version less verbous was both easier to understand and read.
 * The current version is more verbous and without some experience it would be easy to get tangled in the types
 */
