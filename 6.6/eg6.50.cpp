void f();
void f(int);
void f(int,int);
void f(double, double = 3.14);

int main (int argc, char *argv[]) {
    f(2.56, 42); // the call is too ambigous because 2.56 matches the type of f(double, double) while 42 matches the type of f(int, int);
    f(42); // has as best match f(int);
    f(42, 0); // has as best match f(int, int);
    f(2.56, 3.14); // has as best match f(double, double);
    return 0;
}
