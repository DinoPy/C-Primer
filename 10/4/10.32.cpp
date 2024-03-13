#include "Sales_item.h"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main(int argc, char *argv[]) {
    std::ifstream input_file("./bookstore.txt");
    std::istream_iterator<Sales_item> input_iterator(input_file), eof;
    std::ostream_iterator<Sales_item> output_iterator(std::cout, "\n");
    std::vector<Sales_item> vec(input_iterator, eof);

    std::sort(vec.begin(), vec.end(),
              [](const Sales_item &item1, const Sales_item &item2) {
                  return item1.isbn() < item2.isbn();
              });

    Sales_item sum;
    std::vector<Sales_item>::const_iterator begin = vec.cbegin();
    std::vector<Sales_item>::const_iterator next = vec.cbegin();

    for (const auto &i : vec)
        output_iterator = i;

    while (begin != vec.cend()) {
        next = std::find_if_not(
            begin, vec.cend(),
            [&begin](const Sales_item &item1) { return begin->isbn() == item1.isbn(); });
        output_iterator = begin->isbn();
        output_iterator = std::accumulate(begin, next, sum);
        sum = Sales_item();
        begin = next;
    }

    return 0;
}
