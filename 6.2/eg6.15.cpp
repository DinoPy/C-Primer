// s is a const because we don't want to accidentaly change its value
// occurs is a reference that will allow changing the value outside the function which is part of the intetion.
// the char c is initialized based on the pased literal, basically we are saying char c = <the literal pased via the param>
// for char to be a reference it would leed to beinitialized elsewhere which isn't the case on our program's logic
// If we made s a plain reference nothing will happen in the context of our program as there are no changes our code will do to the string, however when creating a function is good to use the types that are needed for the logic at hand, wheever variable isn't to be modified must be a cost.
// by making occurs a reference to const we will deny it to be changed and so it can't be used as a secondary "return varible"
