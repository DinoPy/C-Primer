#include <iostream>

int get_size() { return 1; }

int main (int argc, char *argv[])
{
    begin:
        int sz = get_size();
        if (sz <= 0)
            goto begin;

    while (int sz = get_size())
        if (sz <= 0)
            continue;
    return 0;
}
