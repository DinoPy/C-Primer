#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main(int argc, char *argv[]) {
  const vector<int> ivec = { 55, 34, 99, 100, 84, 77, 81, 63, 70 };
  const vector<string> gradeList = {"F", "D", "C", "B", "A", "A++"};
    for (auto i : ivec) {
        string grade = "";
        if (i < 60) grade = gradeList[0], std::cout << grade << std::endl;
        else {
            grade = gradeList[(i-50) / 10], std::cout << grade << std::endl;
        }
    }
  return 0;
}
