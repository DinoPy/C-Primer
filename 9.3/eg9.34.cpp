#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    vector<int> vi(10, 5);
    vector<int>::iterator iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2)
            iter = vi.insert(iter, *iter);
        ++(++iter);
    }

    cout << vi.capacity() << endl;
    cout << 1 << endl;

    return 0;
}

// firstly the syntax of the loop is wrong, as there is no { } for the while
// loop only the first statement after the expression is ran as part of the loop
// ++iter being outside that will not advance the iterator and so will cause an
// inifnite loop.
//
// Additinally if the ++iter would be in the loop, given that insert adds an element before the one the iterator points to we would need to avance the iterator twice to get to the next element in the container. Advancing only once will get us to the element evaluated before, inserting in front of it and avancing again to the same element would also cause an inifnite loop.
