#include <iostream>
#include <string>

using std::string;

int main (int argc, char *argv[])
{
    int i; double d; const string *ps; char *pc; void *pv;
    pv = (void*)ps;
    pv = reinterpret_cast<void*>(const_cast<string*> (ps));
    i = int(*pc);
    i = static_cast<int>(*pc);
    pv = &d;
    pv = static_cast<void*>(&d);
    pc = (char*) pv;
    pc = static_cast<char*>(pv);
    return 0;
}
