#include <iostream>
#include <memory>
#include <vector>

typedef std::shared_ptr<std::vector<int>> shared_vec_int;

shared_vec_int gen_vector() {
    auto vec = std::make_shared<std::vector<int>>();

    std::cout << typeid(vec).name() << std::endl;
    return vec;
}

shared_vec_int read_input(shared_vec_int vec) {
    int num = 0;
    while (std::cin >> num) {
        vec->push_back(num);
    }

    return vec;
}

void write_output(shared_vec_int vec) {
    for (int i : *vec)
        std::cout << i << std::endl;
}

int main(int argc, char *argv[]) {
    shared_vec_int v = gen_vector();
    std::cout << "starting input" << std::endl;
    read_input(v);
    std::cout << "starting output" << std::endl;
    write_output(v);
    return 0;
}
