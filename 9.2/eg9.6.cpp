#include <list>

using std::list;


int main (int argc, char *argv[]) {
    list<int> lst1;
    list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();

    while (iter1 != iter2) {
        // we want to replace the relational operator < with != so we iterate from the begining to the end of the range.
        // the operator < is not supported for lists but only for vector, string, deque, array.
    }


    return 0;
}
