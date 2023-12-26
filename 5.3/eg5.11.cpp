#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main(int argc, char *argv[]) {
  string input;
  int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, newLineCnt = 0;
  while (getline(cin, input)) {
    for (char c : input) {
      if (tolower(c) == 'a')
        ++aCnt;
    if (tolower(c) == 'e')
      ++eCnt;
    if (tolower(c) == 'i')
      ++iCnt;
    if (tolower(c) == 'o')
      ++oCnt;
    if (tolower(c) == 'u')
      ++uCnt;
    if (tolower(c) == ' ')
      ++spaceCnt;
    if (tolower(c) == '\t')
      ++tabCnt;
    }
    ++newLineCnt;
  }

  cout << aCnt << " " << eCnt << " " << iCnt << " " << oCnt << " " << uCnt << " "
      << spaceCnt << " " << tabCnt << " " << newLineCnt << endl;
  return 0;
}
