#include <cstddef>
#include <iostream>

int main() {
  constexpr size_t rowCnt = 3, colCnt = 4;
  int ia[rowCnt][colCnt];

  for (size_t i = 0; i < rowCnt; ++i)
    for (size_t j = 0; j < colCnt; ++j)
      ia[i][j] = i * colCnt + j;

  std::cout << "Usage of Range For loop" << std::endl;
    for (auto &i : ia)
        for (auto j : i)
            std::cout << j << std::endl;
  std::cout << std::endl;

  std::cout << "Usage of C style loop with subscripts" << std::endl;
  for (auto i = 0; i != rowCnt; ++i)
      for (auto j = 0; j != colCnt; ++j)
            std::cout << ia[i][j] << std::endl;
  std::cout << std::endl;

  std::cout << "Usage of C style loop with pointers" << std::endl;
  for (auto *i = ia; i != ia + rowCnt; ++i)
      for (auto *j = *i; j != *i + colCnt; ++j)
          std::cout << *j << std::endl;
  std::cout << std::endl;

  return 0;
}
