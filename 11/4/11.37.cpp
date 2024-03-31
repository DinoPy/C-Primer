/*
 * Advantages of the ordered version
 *  - Compared to the unordered version it does not require tweaking of the hash function to ensure best performance
 *  - holds keys in order
 *  - is less complicated
 *  - does not require sequential search of the "buckets"
 * Advantages of unordered version:
 *  - may be faster when the order of the elements do not matter
 *  - uses a hash function to establish the bucketing of the elements
 */
