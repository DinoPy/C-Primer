/*
 * It is not legal for both constructors to take default values because in that case both of them are considered default initializers and would cause an anbiguous call.
 * The first constructor takes the default "" for s and along with the default initialized unit_number and revenue becomes a default initializer.
 * Same goes to the cin constructor, once cin is received by default it can be called with an empty parameter list (default) and so we have more than one default that the
 * compiler won't be able to differenciate from the other.
*/
