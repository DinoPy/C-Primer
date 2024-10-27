#include <string>
#include <iostream>
#include <memory>

using std::string;
using std::cin;
using std::allocator;

int main (int argc, char *argv[]) {
    // page 481 version
    size_t n = 10;
    string s;
    /*string *const p = new string[n];*/
    /*string *q = p;*/
    /*while (cin >> s && q != p + n)*/
    /*    *q++ = s;*/
    /*const size_t size = q - p;*/
    /*delete[] p;*/

    // ex 12.2.26 version
    allocator<string> alloc;
    auto rm = alloc.allocate(n);
    auto end = rm;
    while (cin >> s && rm != end + n)
        *rm++ = s;
    const size_t sz_rm = rm - end;

    unsigned int i = 0;
    std::cout << sz_rm;
    while (rm != end) {
        --rm;
        std::cout << *rm << " - " << i << std::endl;
        alloc.destroy(rm);
        ++i;
    }
    alloc.deallocate(rm, n);



    return 0;
}
