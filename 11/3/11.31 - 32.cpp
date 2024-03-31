#include <iostream>
#include <map>
#include <string>
#include <utility>

using std::cout;
using std::endl;
using std::multimap;
using std::pair;
using std::string;

int main(int argc, char *argv[]) {
    multimap<string, string> singers = {
        {"Edd Sheeran", "Photograph"}, {"Edd Sheeran", "Sing"},
        {"Eminem", "Rap God"},         {"Eminem", "Mokingbird"},
        {"50 Cent", "Candyshop"},      {"50 Cent", "If I can't"}};
    int count = singers.count("50 Cent");
    while (count != 0) {
        singers.erase(singers.find("50 Cent"));
        --count;
    }
    auto begin = singers.cbegin();
    while (begin != singers.cend()) {
        cout << begin->second << endl;
        ++begin;
    }

    return 0;
}
