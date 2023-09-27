#include <iostream>

int main (int argc, char *argv[])
{
    /*
     * for (int ix = 0; ix != sz; ++ix)
     * if (ix != sz) // redundant, that's the condition the loops runs based on.
     *  //
     *
     *  int ix;
     *  for (ix != sz; ++ix) // if we want to skip the init-statement we can do that by using a null statement, in the current format the condition is evaluated by the compiler as the init-statement.
     *
     *  for (int ix = 0; ix != sz; ++ix, ++sz) // if we increment the control variable and at  the same time increment the condition variable we will run intro issues such as an infinit loop and possibly out of bounds.
     */
    return 0;
}
