#include<fstream>
#include<vector>
#include<iostream>
#include<string>
#include<iterator>

int main (int argc, char *argv[]) {
    std::ifstream input_stream ("./watcher.sh");
    std::istream_iterator<std::string> input_iterator (input_stream), eof;
    std::vector<std::string> input_vector (input_iterator, eof);
    std::ostream_iterator<std::string> output_iterator (std::cout, " ");

    for (const auto &i : input_vector)
        output_iterator = i;


    return 0;
}
