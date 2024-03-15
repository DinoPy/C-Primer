/*
 * list - when we need to insert and remove anywhere in the list, but the performance matters less. Access requires sequential read.
 * vector - when we need fast random access & we only push and remove from the back.
 * deque - when we need fast random acces & push and remove form both back and front.
 * map - good when we need to hold key values pairs. example when we need to count the occurence of a type in a given data type.
 * set - a container where the keys are the values, good when we want to use the set to filter a given data.
 */
