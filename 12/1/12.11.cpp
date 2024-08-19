// process(shared_ptr<int>(p.get()));
// if we were to call process like this ^^^
// we would pass a built in pointer to an unamed shared_ptr that will have a clean count
// once the function ends the memory will be deleted and p will become an unvalid dangling pointer.
