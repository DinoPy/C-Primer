#include <iostream>

int main (int argc, char *argv[])
{
    int i = 1; double d = 1.0;
    // i *= d
    i *= static_cast<int>(d);
    return 0;
}
