/*
 * A reference can only be used when we have no need to modify the elements of the initializer_list array. Given that the elements are consts we don't have the option to modify them dirrectly.
 * It is also more efficient to use references not to unnecessarely copy the values of each element in the range for.
 * The only situation where a reference can't be used is when we want each element whose value is copied in the range for to be modified.
 */
