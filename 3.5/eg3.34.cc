#include <iostream>
#include <cstddef>

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int *p1 = arr, *p2 = arr + 3;

    p1 += p2 - p1;
    // the code will add to p1 the index difference between p2 and p1; In this case the index will be moved from 0 to 3.
    std::cout << *p1 << std::endl;
    return 0;

}
