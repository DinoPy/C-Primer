/*
Exercise 3.18: Is the following program legal? If not, how might you fix it?
vector<int> ivec;
ivec[0] = 42;

the program is not legal as we initialize the vector as empty then try to access an inexistent object at index 0;
we will rather initialize the object as 42 using vector<int> ivec {42}
*/