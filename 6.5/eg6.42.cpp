#include <iostream>
#include <string>

using std::string; using std::size_t;

string make_plural(size_t ctr, const string &word = "s", const string &ending = "s") {
  return (ctr > 1) ? word + ending : word;
}

int main(int argc, char *argv[]) {
    string str = "failure";
    size_t ctr = str.size();
    std::cout << make_plural(ctr, str) << std::endl;
    return 0;
}
