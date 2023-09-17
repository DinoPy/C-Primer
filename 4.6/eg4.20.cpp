#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> str;
    std::vector<std::string>::iterator iter = str.begin();
    *iter++; // the expression is legal, iter will be incrememeted 1 but the value returned is the original one which is dereferenced.
    (*iter)++; // this version is ilegal as the dereferenced iter is a string which does not support the addition operator.
    *iter.empty() //  the member access operator . has higher precedence compared to the dereference and in this example we try to access the empty function of the iter that unless dereferenced is a pointer which doesn't have the .empty member.
    iter ->empty() // legal, because we dereference the iterator whose value is a string, we then access the empty member of string class.
    ++*iter; // in this example the ++ operator will be applied to the dereferenced iter that's a string, as the string class doesn't support a ++ operator this expression is not legal.
    iter++-> empty(); // this expression is legal, we increment the iter, but the ++ operator returns the original value for usage, we then dereference the pointer and access the empty member of the value.
}
