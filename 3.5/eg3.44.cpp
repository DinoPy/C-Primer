#include <cstddef>
#include <iostream>

int main() {
  constexpr size_t rowCnt = 3, colCnt = 4;
  int ia[rowCnt][colCnt];

  for (size_t i = 0; i < rowCnt; ++i)
    for (size_t j = 0; j < colCnt; ++j)
      ia[i][j] = i * colCnt + j;

  using int_arr4 = int[colCnt];
  typedef size_t st;
  std::cout << "Usage of Range For loop" << std::endl;
  for (int_arr4 &i : ia)
    for (int j : i)
      std::cout << j << std::endl;
  std::cout << std::endl;

  std::cout << "Usage of C style loop with subscripts" << std::endl;
  for (st i = 0; i < rowCnt; ++i)
    for (st j = 0; j < colCnt; ++j)
      std::cout << ia[i][j] << std::endl;
  std::cout << std::endl;

  std::cout << "Usage of C style loop with pointers" << std::endl;
  for (int_arr4 *i = ia; i != ia + rowCnt; ++i)
    for (int *j = *i; j != *i + colCnt; ++j)
        std::cout << *j << std::endl;
  std::cout << std::endl;

  return 0;
}
