/*
 * a. I would select a vector or a list based on the number of elements and the performance consequences for the insertion stage where insertion at the middle may be required. Likely the vector is the choice.
 * b. Deque would be the best option here or a list. More details are needed to establish the performance impact.
 * c. Vector is the best option here, we read, push at the back then sort once and loop over to print.
*/
