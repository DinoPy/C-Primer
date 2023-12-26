#include <iostream>
#include <initializer_list>

using std::initializer_list;

void sum (initializer_list<int> lst) {
    int cnt = 0;
    for (auto i : lst) cnt += i;
    std::cout << cnt << std::endl;
};

int main (int argc, char *argv[]) {
   sum({1,2,3});
    return 0;
}
