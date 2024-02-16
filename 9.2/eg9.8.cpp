// as long as the element in the container is accessed by subscript the most optimal type is size_t but int/const int can be used as well.
// The action done on the list write or read has no relevance to the way the value is accessed.
// All that matters is that when we write to match the type the container is of.
