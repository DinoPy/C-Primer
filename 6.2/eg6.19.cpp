

double calc(double);
int count (const string &, char);
int sum (vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);


/*
calc(23.4, 55.1); // calc function only accepts 1 double variable but two are passed.
count ("abcda", 'a'); // the function declaration is incorrect. The type const string & applies to no identifier.
calc(66); // valid, the int will be converted to double 66.0;
sum(vec.begin(), vec.end(), 3.8); // valid, we have 2 int vectors and a float that will be truncated.
*/
