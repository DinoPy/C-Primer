/*
 * entry and nums were declared as const auto& for the following reasons
 * auto was used to ease the type declaration, the compiler will automatically get the types for us.
 * the const was used so we cannot make changes to the original values, we can only read them and use them further but not edit the original object.
 * the reference was used to the values of the objects we loop over won't be copied in the loop block but rather we get the reference to the original value that cannot be changed.
*/
