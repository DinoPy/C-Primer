// we wrote mid = beg + (end - beg) / 2 as the end - beg / 2 will only give the number of steps the iterator
// needs to take to reach the new mid.
// but the beg will hold the value we are at. So in the example we had for the binary search if the item we 
// were looking for was in the second half then lets say that in a string of 12 the mid would be past 6, the beg was updated to 7
// and then by decreasing end (12) - beg (7 - new beggining for the second half) / 2 we would get 5 / 2 is 2.5
// which for an unsigned is 2 added to the beg (that was updated) would be 7 + 2 leading to 9 the new middle.
// without using the beg we would get the new mid at 2 but the begining at 7 making the iteration invalid.
// beside this not including an iterator in the math that should result an iterator type will render a differetn
// type for example (end - beg) / 2 will result a long instead of the ::iterator;