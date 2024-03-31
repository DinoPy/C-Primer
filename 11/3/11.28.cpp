#include <map>
#include <string>
#include <vector>

using std::map;
using std::string;
using std::vector;

int main (int argc, char *argv[]) {
    map<string, vector<int>> ref;
    map<string, vector<int>>::iterator found = ref.find("test");
    return 0;
}
