#include <iostream>

int compare (int numi, const int *nump) {
    if (numi > *nump)
        return numi;
    if (*nump >= numi)
        return *nump;
}

int main (int argc, char *argv[]) {
    int a = 10;
    int *b = &a;
    std::cout << compare(a, b) << std::endl;
    return 0;
}
