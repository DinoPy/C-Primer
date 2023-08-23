#include <iostream>

int main()
{
    int v1 = 0, v2 =0;
    std::cin >> v >> v2;
    cout << v1 + v2 << std::endl;
    return 0;
}

/*
eg1.15.6.cc: In function ‘int main()’:
eg1.15.6.cc:6:17: error: ‘v’ was not declared in this scope; did you mean ‘v2’?
    6 |     std::cin >> v >> v2;
      |                 ^
      |                 v2
eg1.15.6.cc:7:5: error: ‘cout’ was not declared in this scope; did you mean ‘std::cout’?
    7 |     cout << v1 + v2 << std::endl;
      |     ^~~~
      |     std::cout
In file included from eg1.15.6.cc:1:
/usr/include/c++/9/iostream:61:18: note: ‘std::cout’ declared here
   61 |   extern ostream cout;  /// Linked to standard output
      |                  ^~~~
*/