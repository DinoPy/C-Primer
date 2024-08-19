#include <iostream>
#include <vector>

auto vector_generator() -> std::vector<int> * {
    std::vector<int> *vec = new std::vector<int>();

    return vec;
}

std::vector<int> *read_input(std::vector<int> *vec) {

    int num = 0;
    while (std::cin >> num) {
        vec->push_back(num);
    }
    return vec;
}

std::vector<int> *write_output(std::vector<int> *vec) {
    for (auto i : *vec)
        std::cout << i <<std::endl;

    return vec;
}

int main(int argc, char *argv[]) {
    std::vector<int> *v = vector_generator();
    read_input(v);
    write_output(v);
    delete v;
    v = nullptr;
    return 0;
}
