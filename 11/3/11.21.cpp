#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    map<string, size_t> word_count;
    string word;

    while (cin >> word)
        ++word_count.insert({word, 0}).first->second;
    return 0;
}

/*
 * the loop will read word by word the contents if the input stream.
 * ++ will increment the value resulted from the following expression
 * word_count.insert returns a pair. inserting {word, 0} would ensure that is
 * the key exist it is returned as .first of the return pair and if it does not
 * exist it is inserted with value 0. we then take the first which is an
 * iterator pointing to the returned pair in the container dereference and
 * access the second member which is then passed to ++ to increment.
 */
