#include <iostream>

// a parameter should be a reference when the data type is very large and it would be inefficient to copy the value
// when we want to update the value of the variable within the function
// to avoid unintentionally changing the value we can turn the value into a cost within the function
// when the datatype can't be copied
//
// a parameter should be passed by value when we don't want to change the original value but we need to manipulate the value within the function.
