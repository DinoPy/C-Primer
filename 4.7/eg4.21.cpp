#include <iostream>
#include <vector>
#include <iterator>

int main (int argc, char *argv[])
{
    std::vector<int> ivec(10, 1);
    int count = 0;
    for (int &i : ivec)
        i = count++;
    auto iter = ivec.begin();
    while( iter != ivec.end())
        std::cout << *iter++ << std::endl;

    for (int &i : ivec)
        std::cout << i << (i % 2 == 0 ? " even" : " not even") << std::endl;
    return 0;
}
