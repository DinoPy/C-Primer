// by not setting the constructor that takes an
// initializer_list explicit we allow for implicit conversions
// of the method the arguments are passed
// for example
// instead of only
// StrBlob obj1 = {"one", "two", "three"}
// we can also do
// StrBlob obj2 = "one", "two", "three";
// or
// StrBlob obj3 ("one", "two", "three");
