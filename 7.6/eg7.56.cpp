/*
 * A static member is a member that's linked to the class itself rather than an object of the class.
 * a static member function does not receive the this object
 * a static data member may not be initialized inline unless it is a const or constexpr where it can be declared and later initialized in the class body.
 * The pros:
 * the static members are the same and accessible by all instances of the class.
 * the lifetime of a static data member is for the duration of the program
 * a static member can be used in placed where a nonstatic one cannot. Ex: used as default argument in a constructor, or used to hold its own class type/incomplete types.
 * static members can be accessed using the class name and the scope operator but also through the objects of class, and are available within the class body with no qualification.
 * The const:
 * a static data member needs to be defined outside the class body even the private ones.
 * cannot be initialized using constructors as they are not part of the object but the class
 * const / constexpr members that were initialized inside the class body still need to be defined outside the class definition.
 */
