/*

(a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
          case ’a’: aCnt++; // requires break so execution won't cause e to be incremented as well
          case ’e’: eCnt++; // does not require break but is recommended to have one.
          default: iouCnt++; // this default case only considers that we input vowels, we would need a case for each of the remaining vowels that increment the iouCnt.
}

(b) unsigned index = some_value();
switch (index) {
          case 1:
              int ix = get_value();
              ivec[ ix ] = index;
              break;
          default:
              ix = ivec.size()-1; // ix is not declared in the default case but in case 1 that can't be run before the default.
              ivec[ ix ] = index;
}

(c) unsigned evenCnt = 0, oddCnt = 0; int digit = get_num() % 10;
    switch (digit) {
          case 1, 3, 5, 7, 9:
              oddcnt++; // the oddcnt name is miss-typed it should be oddCnt.
              break;
          case 2, 4, 6, 8, 10:
            evencnt++; // same as oddcnt;
            break;
}

(d) unsigned ival=512, jval=1024, kval=4096; unsigned bufsize;
unsigned swt = get_bufCnt();
switch(swt) {
          case ival: // ival needs to be a const expression and not a regular one. there will be a compiler error.
              bufsize = ival * sizeof(int);
              break;
          case jval: // same as ival
              bufsize = jval * sizeof(int);
              break;
          case kval: // same as ival
              bufsize = kval * sizeof(int);
              break;
}

*/

int main (int argc, char *argv[])
{
 unsigned ival=512, jval=1024, kval=4096; unsigned bufsize;
unsigned swt = get_bufCnt();
switch(swt) {
          case ival:
              bufsize = ival * sizeof(int);
              break;
          case jval:
              bufsize = jval * sizeof(int);
              break;
          case kval:
              bufsize = kval * sizeof(int);
              break;
}
    return 0;
}
