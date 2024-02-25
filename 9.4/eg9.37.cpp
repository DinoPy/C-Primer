// arrays from the library similarly to the built in arrays have a fixed size
// and the size is part of the array type. a list does not have a capacity
// member because its elements are not located in contiguous memory. a list
// element is a node that points at the element before and the one after. The
// elements are located where there was space available. hence a list has a size
// because it has a number of elements but does not work as a vector where the
// elements are located one by the other in memory and so once a time a
// reallocation is required.
