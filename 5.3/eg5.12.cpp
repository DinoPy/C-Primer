
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main(int argc, char *argv[]) {
  string input;
  int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0,
      tabCnt = 0, newLineCnt = 0, fiCnt = 0, ffCnt = 0, flCnt = 0;
  while (getline(cin, input)) {
    for (unsigned i = 0; i < input.size(); ++i) {
      if (tolower(input[i]) == 'a')
        ++aCnt;
      if (tolower(input[i]) == 'e')
        ++eCnt;
      if (tolower(input[i]) == 'i')
        ++iCnt;
      if (tolower(input[i]) == 'o')
        ++oCnt;
      if (tolower(input[i]) == 'u')
        ++uCnt;
      if (tolower(input[i]) == ' ')
        ++spaceCnt;
      if (tolower(input[i]) == '\t')
        ++tabCnt;
      if (tolower(input[i]) == 'f' && tolower(input[i + 1]) == 'i')
        ++fiCnt;
      if (tolower(input[i]) == 'f' && tolower(input[i + 1]) == 'f')
        ++ffCnt;
      if (tolower(input[i]) == 'f' && tolower(input[i + 1]) == 'l')
        ++flCnt;
    }
    ++newLineCnt;
  }

  cout << aCnt << " " << eCnt << " " << iCnt << " " << oCnt << " " << uCnt
       << " " << spaceCnt << " " << tabCnt << " " << newLineCnt << " " << ffCnt
       << " " << flCnt << " " << fiCnt << " " << endl;
  return 0;
}
