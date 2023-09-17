#include <iostream>
#include <vector>

int main (int argc, char *argv[])
{
    std::vector<int> ivec(10,1);
    std::vector<int>::size_type cnt = ivec.size();

    for(std::vector<int>::size_type ix = 0;
            ix != ivec.size(); ix++, cnt--) {
        ivec[ix] = cnt;
        std::cout << cnt << std::endl;
    }
    // there is no change that needs to be made to use the postfix decrement and increment operators however it is recommended to avoid them when possible making the prefix operators the standards.
    return 0;
}
