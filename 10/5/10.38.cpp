/*
 * Input Iterator - allows pre and post fix increment, dereference only as right side of an assignment, equality & inequality,  and ->. This iterator allows only one read per read and will invalidate other iterators to read values.
 * Output Iterator - allows pre and post fix increment, dereference only on the left side of an assignment. Can only move in one drection.
 * Forward Iterator - All operations of input and output iterators.  They allow reading and writting and this multiple times on the same element.
 * Bidirectional Iterator - can go both ways, supports all operations supported by forward iterator & decrement iterator.
 * Random-access Iterator - supports bidiferctional iterator operations + relational <, <=, >, >=) addition & subtraction +, +=, -, -=, subtraction betweeen two iterators, subscript.
*/
