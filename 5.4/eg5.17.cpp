#include <iostream>
#include <vector>

using std::vector;


bool isPrefix(vector<int> shorter, vector<int> longer) {
    for (decltype(shorter.size()) i = 0; i < shorter.size(); ++i)
        if (shorter[i] != longer[i])
                return false;
    return true;
}

int main (int argc, char *argv[])
{
   vector<int> ivec = {1,2,3,4,5};
   vector<int> jvec {1,2,3,4,5};

   auto isize = ivec.size();
   auto jsize = jvec.size();

   if (isize <= jsize)
       std::cout << isPrefix(ivec, jvec) << std::endl;
   else
       std::cout << isPrefix(jvec, ivec) << std::endl;

    return 0;
}
