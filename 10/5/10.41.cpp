// 1. within the input range replace the values that match old_val with new_val.
// 2. within the input range replace the values where the predicate returned a nonzero value with new_val
// 3. using the input range iterate over all values, copy them one by one to the destination and those that match the old_value will be replaced by new_val in the dest container.
// 4. using the input range iterate over all elements, copy them to destination with the exeption of those where the predicate returned a nonzero value that will be replaced in the destinatino with new_val.
