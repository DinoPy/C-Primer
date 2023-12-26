#include <iostream>
#include <vector>

using std::vector;

int funct(int, int);
typedef decltype(funct) *functP;

int main(int argc, char *argv[]) {
    vector<functP> functList;
    functList.push_back(funct);

    return 0;
}

int funct (int i, int j) {};
