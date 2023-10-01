#include <iostream>
#include <vector>

int incremental () {
    static int num = 0;
    return num++;
}

int main (int argc, char *argv[]) {
    std::vector<int> ivec(10,10);
   for (auto i : ivec) {
       std::cout << incremental() << std::endl;
   }
    return 0;
}
