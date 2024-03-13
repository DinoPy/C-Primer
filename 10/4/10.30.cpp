#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main(int argc, char *argv[]) {
    std::istream_iterator<int> input_iterator(std::cin), eof;
    std::ostream_iterator<int> output_iterator(std::cout, " - ");
    std::vector<int> vect(input_iterator, eof);
    std::sort(vect.begin(), vect.end());
    std::copy(vect.cbegin(), vect.cend(), output_iterator);
    return 0;
}
