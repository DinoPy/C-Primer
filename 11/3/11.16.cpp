#include <iostream>
#include <map>
#include <iterator>
#include <utility>


int main (int argc, char *argv[]) {
    std::map <int, int> mapp;
    auto inserter = std::inserter(mapp, mapp.begin());

    int num = 0;
    while (std::cin >> num)
        inserter = std::make_pair(num, 0);
    return 0;
}
