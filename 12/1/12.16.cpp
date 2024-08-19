#include <memory>

int main(int argc, char *argv[]) {
    std::unique_ptr<int> ui(new int(3));
    /*std::unique_ptr<int> uj (ui.get());*/
    std::unique_ptr<int> uj;
    uj = ui;

    return 0;
}
