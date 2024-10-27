int main(int argc, char const *argv[])
{
    int *pa = new int[10];
    delete[] pa;
    return 0;
}
// given that pa is a dynamically allocated array it has to be deleted
// using delete[]
