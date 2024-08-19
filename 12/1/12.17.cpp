#include <memory>

using std::unique_ptr;

int main (int argc, char *argv[]) {
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);
    typedef unique_ptr<int> IntP;

    /*IntP p0(ix); // unique_ptr requires a pointer to dinamically allocated memory*/
    /*IntP p1(pi); // requires a pointer returned by new*/
    IntP p2 (pi2);
    /*IntP p3(&ix); // requires a pointer returned by new*/
    IntP p4(new int(2048));
    /*IntP p5 (p2.get()); // cannot copy the address of another unique pointer.*/

    return 0;
}
