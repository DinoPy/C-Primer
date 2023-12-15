#include <iostream>
#include <vector>

void print (std::vector<int> vec, std::size_t size) {
    std::cout << vec[size - 1] << std::endl;
    if (size >  1)  {
        print (vec, size - 1);
    }
}

int main (int argc, char *argv[]) {
    std::vector<int> ivec = {1,2,3,4,5,10,255};
    print(ivec, ivec.size());
    return 0;
}
