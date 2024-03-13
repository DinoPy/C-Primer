#include <fstream>
#include <iostream>
#include <iterator>

int main(int argc, char *argv[]) {
    if (argc != 4)
        std::cerr << "Usage: ./program in_file out_file out_file" << std::endl;

    std::ifstream input(argv[1]);
    std::ofstream even(argv[2]);
    std::ofstream odd(argv[3]);

    std::istream_iterator<int> input_iterator(input), eof;
    std::ostream_iterator<int> even_output_iterator(even, "\n");
    std::ostream_iterator<int> odd_output_iterator(odd, "\n");

    while (input_iterator != eof) {
        if (*input_iterator % 2 == 0)
            even_output_iterator = *input_iterator;
        else
            odd_output_iterator = *input_iterator;
        ++input_iterator;
    }

    input.close();
    even.close();
    odd.close();

    return 0;
}
