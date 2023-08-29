int main(){
    const int v2 = 0; // low level
    int *p1 = &v1, &r1 = v1; // none
    int v1 = v2; // none
    const int *p2 = &v2, *const p3 = &i, &r2 = v2; // low level , both, low level

    r1 = v1; // valid r1 which is an alias for v1 is assigned its own value;
    p1 = p2; // invalid - p2 is a low level const and hence it points to a const int 
    p1 = p3; // ^^ same
    p2 = p1; // valid as p2 is not a const and can be reasigned and the type it points to can change from const to non const.
    p2 = p3; // valid - p2 which is a pointer to const int can take the value of a const pointer that points to const int.

    return 0;
}