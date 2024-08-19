// q is dinamic int
// r is dinamic int
// the address r points to is updated to q's address but r alocated memory is not released resulting in a leak.
// in case of shared pointers there is not such issue even if the actions taken are identical because the shared
// pointer is automatically deleted if its usage count goes to 0 as it does here.
