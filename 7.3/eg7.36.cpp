
struct X {
    X (int i, int j) : base(i), rem(base % j) {}
    int rem, base;
};

/*
 * ANSWER
 * the data members are initialized in the order they are declared, rem will be initialized first based on j that is at that time undefined, we must reverse the order of declaration
 * or not use the base object to initialize rem;
*/
