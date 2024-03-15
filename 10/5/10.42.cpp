/*
 void elimDups(vector<string> &words) {
// sortwordsalphabeticallysowecanfindtheduplicates sort(words.begin(),
words.end());
// unique reorders the input range so that each word appears once in the
// front portion of the range and returns an iterator one past the unique range
auto end_unique = unique(words.begin(), words.end());
// erase uses a vector operation to remove the nonunique elements
words.erase(end_unique, words.end()); }
 */

#include <list>
#include <string>
#include <iostream>

using std::list;
using std::string;

void elimDups(list<string> &words) {
    words.sort();
    words.unique();
};

void print (const list<string> &words) {
    for (const string &s : words)
        std::cout << s << " ";
    std::cout << std::endl;
};

int main(int argc, char *argv[]) {
    list<string> slst = {"the",  "quick", "red",  "fox", "jumbs",
                         "over", "the",   "slow", "red", "turtle"};
    print(slst);
    elimDups(slst);
    print(slst);

    return 0;
}
