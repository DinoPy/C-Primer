int main () {
    int i , *const cp;
    int *p1, *const p2;
    const int ic, &r = ic;
    const int *const p3;
    const int *p;

    i = ic; // legal as i is an int that takes the value of ic which is a const int (can be read can't be written)
    p1 = p3; // error with low level type. p3 is const while p1 isn't.
    p1 = &ic; // same ^^^
    p3 = &ic; // p3 is a const itself so once initialised can't be changed.
    p2 = p1; // ^^ same
    ic = *p3; // ^^ same

// the exercise requirements are confusing as out of prev exercise only one initialization was valid so logically the variables required to be used in this ex are not even existent

}