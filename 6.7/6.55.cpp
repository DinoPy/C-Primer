#include <iostream>

using namespace std;

int add (int i, int j) { return i + j;};
int subtract (int i, int j) {return i - j;};
int multiply (int i, int j) {return i * j;};
int divide (int i, int j) { return i / j;};

int main (int argc, char *argv[]) {
    vector<decltype(&add)> functList = {*add, *subtract, *multiply, *divide};

    for (auto fn : functList)
        cout << fn(3, 5) << endl;

    return 0;
}
