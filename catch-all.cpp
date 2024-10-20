#include <iostream>
// FUNCTION has: return type, name, parameter list, body
// EX: std::vector<std::string> vs (std::string s1, std::string s2) { does something };

// TYPES:
//      Use unsigned when value can't be negative
//      Use int instead of short or long. Use long long if needed.
//      Don't use char or bool in plain arithmetic expressions
//      Use double instead of float.

// ARITHMETIC TYPES
// TYPE      MIN SIZE
// bool      NA
// char      8 bits
// wchar_t   16 bits
// char16_t  16 bits
// char32_t  32 bits
// short     16 bits
// int       16 bits
// long      32 bits
// long long 64 bits
// float     6 significant digits
// double    10 significant digits
// long double 10 significant digits

// LITERALS
// decimals - 123
// octal - 0173
// hexadecimal - 0x7B

// TYPES OF LITERALS
// Prefix: u = char16_t, U = char32_t, L = wchar_t, u8 = char
// Suffix: u = unsigned, l = long, ll = long long, f = float, l = long double <-- all of these can be uppercase

// OBJECT = region in memory that has a type and can contain data
// INITIALIZATION = object that gets its value when created.
// TYPES of INITIALIZATION: int a = 0; int a = {0}; int a{0}, int a(0);
// ASSIGNMENT = ogliteration of an object's curernt value and replacement with a new one
// Variable DECLARATION = makes a name known to the program. Specifies the type and name of the variable.
// Variable DEFINITION = Is a declaration, also alocates storage and may provide the variable an initial value.
// IDENTIFIERS = can be composed of letter, digits and underscores. No limig bu tmust begin with a letter or underscore.
// not allowed two consecutive __ or _ follolwed by uppercase or beggining with an underscore if the definition takes place outside a function

// Naming Conventions
//      Should give indications of its meaning
//      Normally lower case
//      Classes begin with uppercase
//      word separation with _

// REFERENCE = refers to the value in memory of the initializer object. & is the address of operator.
// need to be initialized with an object and not a literal
// POINTER = variable that points to the memory location of another variable.
// only create points to defined variables or initialize as nullptr

// const = allows defining a variable that cannot be changed, need to be initialized
// a reference to const can't change the const value
// a pointer to const can't change the object value through the pointer
// pointers can be const.
// TWO TYPES OF CONST:
//      low level - applicable to the type of the object we point or reference
//      top level - applicable to the object itself not the reference or the pointed to object.
//      EX: const double *const pip = &pi; const double = low level (type of object pointed to) *const pip = top level (object itself);

// CONSTANT EXPRESSION = expression whose value cannot change and that can be evaluated at compile time. Ex: literal.
// constexpr = requests the compiler to check if a declaration is a constant expression.
// when defining a pointer with constexpr the specifier applies to the pointer not the type to which the pointer points.

// typedef type name
// using name = type
// auto = will establish the type of the expression from the initializer
// decltype = compiler checks the return value of the an expression and assign that type to the new variable.
//      when usint to deduce the type of a variable it will return the exact type mentioned upon initialsation including const and &
//      dereferencing a pointer will return a reference
//      enclosing the name of a variable in parantheses will always return a reference to that type
//      if an expression is provided, the result of the expression is evaluated

// DATA STRUCTURES = way to group together related data elements.
//      EX: struct name { .. };
//      Members  = data members are variables that hold data.
//      Access via . operator;

// PREPROCESOR =  runs before the compiles and changes the source text of the program
//      Head guards: #ifdef, #ifndef, #if, #endif



// STRINGS
//      string s1; = empty string, string s2(s1) = copy of s1, string s3 = s1 = also copy of s1;
//      string s3("value") = copy of the literal not including null char
//      string s4 = "value" = same as above
//      string s5(n, 'c') = string o f n copies of char 'c'

// STRING OPERATIONS
//      os << s - writes to os
//      is >> s - is reads to s
//      getline (is, s) - reads a line from input stream to s
//      s.empty()
//      s.size() - length
//      s[n] - char at position [n]
//      s1 + s2 - concatenation
//      s1 = s2 - replaces s1 with a copy of s2
//      s1 == s2 - checks for the same characters
//      s1 != s2
//      <, <=, >, >= - comparisons are case sensitive and use dictionary ordering

// Writing to a string from cin only reads until space
// string::size_type = unsigned of type .size()
// concatenation requires at least a string

// for (declaration : expression)
//      expression = sequence
//      declaration = defines a copy of the variable from the sequence.

// CTYPE FUNCTIONS
// isalnum(c) - true if letter or digit
// isalpha(c) - true if letter
// iscntrl(c) - true if control char
// isdigit(c) - true if digit
// isgraph(c) - true if not space but printable
// islower(c) - true if lowercase
// isprint(c) - true if printable (has visible representation)
// ispunct(c) - true if punctuation characters
// isspace(c) - true if space
// isupper(c) - true if uppercase
// isxdigit(c) - true if hexadecimal
// tolower(c) - returns lowercase equivalent
// toupper(c) - returns uppercase equivalent


// VECTORS = collection of objects having the same type
// requires #include <vector> and using std::vector
// Default initialization:
//      vector<T>v1 - holds objects of type T. Default initialized. v1 is empty.
//      vector<T>v2(v1) - copy of v1
//      vector<T>v2 = v1 - copy of v1
//      vector<T>v3(n, val) - n elements of given value
//      vector<T>v4(n) - n copies of value initialized object
//      vector<T>v5{a,b,c, ...} - has as many elements as there are initailizers
//      vector<T>v5 = {a,b,c, ...} - same as above
//      vector<T>v6(v1.begin(), v.begin() + n) - copies the elements within given range
// Can be initialized by providing the addresses of a given range of a C style array.
// v4 - limitations: works only on types that have a default initializer and requires direct form of initialization
// METHODS:
//      v.empty()
//      v.size() - length
//      v.push_back(t) - adds element t to the end of v
//      v[n] - returns a reference to the element at position n in v
//      v1 = v2 - replaces v1 with a copy of v2
//      v1 = {a,b,c ..} - replaces v1 with a copy of the elements in the initializer list
//      v1 == v2 - compares the number of elements and each elements in the 2 VECTORS
//      v1 != v2 - oposite of above
//      <, <=, >, >= - normal meaning, uses dictionary ordering
//
// Size type = vector<int>::size_type <---- the type of the vector needs to be specified


// ITERATORS = methods on objects that allow iteration. Can be accessed by using .begin() and .end()
// OPERATIONS:
//      *iter - returns a reference to the element denoted by the iterator
//      iter->mem - dereferences iter and fetches the member named mem from the underlying element
//      ++iter - makes iter to refer to the next element in the sequence
//      --iter - oposite of above
//      iter1 == iter2 - compares for equality two iterators. They are only the same if they denote the same element or off the end element.
//      iter != iter2 - negated version of the above
//
//  To access the value of an iterator we need to dereference it using * operator
//  .cbegin & cend return const types that won't allow writing to the element
//  The type of iterator is given by the object that allows iteration via ::iterator or ::const_iterator
//  -> operator dereferences & accesses the member following >

// ITERATOR ARITHMETIC
// Methods supported by vector & string iterators - iterators must denote elements in or one past the end of the same container.
//      iter + n OR iter - n increments or decrements the iterator n times.
//      iter += n OR iter -= n - assigns & increments/decrements n times.
//      iter1 - iter2 - yields the diference between the "indexes" of the two iterators.
//      >, >=, <, <= - compares the "index" of the iterator.
// the type of the diference between two vectors is difference_type.

// The value RETURNED by an iterator is not a reference bu a copy. In order to change the value of the returned object we need to assign it to a reference type.



// ARRAY = similar to vectors but with fixed size & cannot be changed
// Can be defined with: arr[n] or arr[constexpr]
// All elements in an array are default initialized
// Cannot be copied
// We need to specify the type and cannot use auto to deduce the type.
// Array hold object, can't hold references
// We can list initialize an array and in that case the compiler will infer the size. If we give a dimension the length of
//       the initializer list must be smaller than the length of the array
// When using the array in initializations, the compiler will replace the array with a pointer to first element.
//      this won't happen though with decltype that will return the exact type.
// The same operations done to a vector iterator can be done to a pointer to the first element in the array
// To get the address of the last element we use type *e = &arr[n] where n is the length of the array.
// Ex: for (int *b = arr, e = *arr[length_var]; b != e; ++b) { ... }
// begin() or end() found in iterator header will also return pointers to first and last element of the array.
//      To get the length of the array we can subtract end() from begin() and the result will be a ptrdiff_t.
// or while (b < e) { ... ; ++b }
// While using for of variable we need to declare as a reference any variable that's not the inner most array. This is done to avoid the normal array to pointer conversion.


// C style strings = null terminated (\0) arrays
// functions available from cstring header
//      strlent(p) - length without \0
//      strcmp(p1, p2) - compares for equality, returns an 0 or 1
//      strcat(p1, p2) - appends p2 to p1, returns p1
//      strcpy(p1, p2) - copies p2 into p1, returns p1
// Can be initialized from a string literal into a const char array or by providing an array of chars.
// Can be initialized from c_str method of a string.



// EXPRESSIONS = composed of one or more porands and yields a result when is evaluated.
// OPERATOR = The symbol that applies to the element adjacent to it.
// OPERANDS = The elements that are included in an opertion.
//  TYPES:
//      - Unary - act on one operand (& or *)
//      - Binary - act on 2 operands
//      - Tertiary - functions

// GROUPING OPERATORS
// An expression with two or more operators is a compound expression. In order to be evaluated the operands are grouped to the operators.
// Precedence and Associativity is used to establish how the operands are grouped in an expression.
// Pharantesis override both precedence and associativity

// PRECEDENCE = defines the priority or order in which operators are evaluated in an expression.
//      Operators with higher precedence are evaluated first.
//      Arithmetic operators (*, /, %) > addition and subtraction > Relational operators (<, <=, >, >=) > Logical operators (&&, ||)

// ASSOCTIATIVITY = defines the order in which operators with the same precedence are evaluated.
//      Can be either left or right associative.
//      Left associative are evaluated from left to right such as addition.
//      Right associative are evaluated form right to left such as assignation (=).
//      Arithmetic operators are left associative, assignation is right associative, logaical operators are left associative

// OPERATOR PRECEDENCE TABLE
// Associativity      | Operator           | Function                            | Use
// L                  | ::                 | global scope                        | ::name
// L                  | ::                 | class scope                         | class::name
// L                  | ::                 | namespace scope                     | namespace::name
// ----------------------------------------------------------------------------------------------------------
// L                  | .                  | member selectors                    | object.member
// L                  | ->                 | member selectors                    | pointer->member
// L                  | []                 | subscript                           | expr[expr]
// L                  | ()                 | function call                       | name(expr_list)
// L                  | ()                 | type construction                   | type (expr_list)
// ----------------------------------------------------------------------------------------------------------
// R                  | ++                 | postfix increment                   | lvalue++
// R                  | --                 | postfix decrement                   | lvalue--
// R                  | typeid             | type ID                             | typeid(type)
// R                  | typeid             | runtime type ID                     | typeid(expr)
// R                  | explicit cast      | type conversion                     | cast_name<type>(expr)
// ----------------------------------------------------------------------------------------------------------
// R                  | ++                 | prefix increment                    | ++lvalue
// R                  | --                 | prefix decrement                    | --lvalue
// R                  | ~                  | bitwise NOT                         | ~expr
// R                  | !                  | logical OR                          | !expr
// R                  | -                  | unary minus                         | -expr
// R                  | +                  | unary plus                          | +expr
// R                  | *                  | dereference                         | *expr
// R                  | &                  | address-of                          | &expr
// R                  | ()                 | type conversion                     | (type) expr
// R                  | sizeof             | size of object                      | sizeof expr
// R                  | sizeof             | size of type                        | sizeof type
// R                  | sizeof...          | size of parameter pack              | sizeof...(name)
// R                  | new                | allocate object                     | new type
// R                  | new[]              | allocate array                      | new type[size]
// R                  | delete             | dealocate object                    | delete expr
// R                  | delete[]           | dealocate array                     | delete[] expr
// R                  | noexcept           | can expr throw                      | noexpect (expr)
// ----------------------------------------------------------------------------------------------------------
// L                  | ->*                | ptr to member select                | ptr->*ptr_to_member
// L                  | .*                 | ptr to member select                | obji.*ptr_to_member
// ----------------------------------------------------------------------------------------------------------
// L                  | *                  | multiply                            | expr * expr
// L                  | /                  | divide                              | expr / expr
// L                  | %                  | modulo                              | expr % expr
// ----------------------------------------------------------------------------------------------------------
// L                  | +                  | add                                 | expr + expr
// L                  | -                  | subtract                            | expr - expr
// ----------------------------------------------------------------------------------------------------------
// L                  | <<                 | bitwise shift left                  | expr << expr
// L                  | >>                 | bitwise shift right                 | expr >> expr
// ----------------------------------------------------------------------------------------------------------
// L                  | <                  | less than                           | expr < expr
// L                  | <=                 | less than or equal                  | expr <= expr
// L                  | >                  | greater than                        | expr > expr
// L                  | >=                 | greater than or equal               | expr >= expr
// ----------------------------------------------------------------------------------------------------------
// L                  | ==                 | equality                            | expr == expr
// L                  | !=                 | inequality                          | expr == expr
// ----------------------------------------------------------------------------------------------------------
// L                  | &                  | bitwise AND                         | expr & expr
// ----------------------------------------------------------------------------------------------------------
// L                  | ^                  | bitwise XOR                         | expr ^ expr
// ----------------------------------------------------------------------------------------------------------
// L                  | |                  | bitwise OR                          | expr | expr
// ----------------------------------------------------------------------------------------------------------
// L                  | &&                 | logical AND                         | expr && expr
// ----------------------------------------------------------------------------------------------------------
// L                  | ||                 | logical OR                          | expr || expr
// ----------------------------------------------------------------------------------------------------------
// R                  | ?:                 | conditional                         | expr ? expr : expr
// ----------------------------------------------------------------------------------------------------------
// R                  | =                  | assignment                          | lvalue = expr
// R                  | *=, ==, %=         | compound assignment                 | lvalue + expr, etc
// R                  | +=, -=             |                                     |
// R                  | <<=, >>=           |                                     |
// R                  | &=, |=, ^=         |                                     |
// ----------------------------------------------------------------------------------------------------------
// R                  | throw              | throw exception                     | throw expr
// ----------------------------------------------------------------------------------------------------------
// L                  | ,                  | comma                               | expr, expr


// L VALUES AND R VALUES
//      Every expression in C++ is either an lvalue or a rvalue
//      Lvalues usually yield an object or a function. with the exception of literals that can't be on the left side of assignment. some expressions yield objects but return them as rvalue not lvalues.
//      lvalue = location in memory, rvalue the object itself.
//      operands differ as to whether they need lvalues or rvalues same with their return. The exception is that we can use lvalue where rvalue is required but not the inverse.
//      Lvalues are essentially values that have a memory location and can be used to retrieve or modify data at that location. Rvalues are typically used on the right side of an assignment
//          and are often the result of an operation or a temporary value that does not persist

// Order of evaluation - we don't know how the ocmpiler evaluated she sub expressions of an expression.  There is no given requence so the copiler is allowed to optimise as needed.

// COMPOUND EXPRESSION - an expression with two or more operators is a compound expression.
//      When in doubt, parenthesize.
//      If you change the value of that operand, don't use that operand elsewhere in the same expression. Unless the result of an operation is used as an operand to an operator such as *++iter

// ARITMETIC OPERATORS
//      Unary operators have higher precedence.
//      Unary operators are used to negate a value. Don't use on booleans.

// LOGICAL and RELATIONAL OPERATORS
//      Relational operators take operands of arithmetic or pointer type.
//      Logical operators take operands of any type that can be implicitly converted to boolean.
//      All these ^ return a boolean.
//      Arithmetic and pointer operands with value 0 are false, all other are true.
//      The logical AND and OR operators always evaluate their left operand first before the right.
//              In case of && the right side is evaluated only if the left side is true.
//              In case of || the right side is evaluated only if the left side is false.

// ASSIGNMENT OPERATORS
//      Left hand operand must be a modifiable lvalue.
//      If the value of the right hand operand isn't the same with the left hand one an implicit conversion takes place if possible.
//      Using braced initialization {} will deny the implicit conversion
//      Assignment is right associative
//      Assignment has low precedence - in certain expressions assignment may need to be paranthesised

// COMPOUND ASSIGNMENT OPERATORS
//      When doing compound assignment the left hand operand is evaluated only once compared to the regular assignment.

// INCREMENT AND DECREMENT OPERATORS
//      prefix - increments/decrements the operand and returns the result
//      postfix -  increments/decrements the operand and returns a copy
//      As operands can be evaluated in any order it is recommended to paranthesise the operands that are part of an expression and will be use in another. ex *beg = toupper(*beg++); - beg may be incremented before *beg is dereferenced.

// MEMBER ACCESS OPERATORS
//      . operator - used to access a member of a class
//      -> operator - dereferences a pointer and accesses that member of the class
//      The dereference operator has lower precedence than member access operators so when used together the dereference must pe paranthesised

// CONDITIONAL OPERATORS
//      ?: operator lets us embed if-else logic inside an expression. Ex: cond ? expr1 : expr2
//      The result of a conditionall operator is lvalue if both expressions are lvalue or if they convert to a common lvalue type else the result is an rvalue.
//      Has fairly low precedence, when embeded in a compound expression we usually paranthesise

// THE BITWISE OPERATORS
//      Takes operands of intergral type that will be used as a collection of bits
//      SHIFTS << >>
//          If the operand is signed and its value is negative, then the signed bit in a machine dependant way.
//          Recommended to use unsigned types not to complicate with how the signed bit will be handled
//      NOT ~
//          Will invert all bit values - all 1 will become 0 and all 0 will become 1
//      AND &, OR |, XOR ^
//          AND & - if both bits are 1 then the result is 1 else it is 0
//          OX | - if any of the 2 bits are 1 the result is 1 else 0
//          XOR ^ - if any of the bits are 1 but not both then the result is 1 else 0

// SIZEOF OPERATOR
//      Returns the size in bytes of an expression or a type name.
//      Right associative
//      Returns a size_t type

// COMMA OPERATOR
//      Takes 2 operands evaluated from left to right
//      The left hand expression is evaluated and the result is discarted.
//      The result is the right hand expression. - L value of the right hand operand if the right hand is an lvalue
//      Has very low precedence

// TYPE CONVERSION
//      Some types are related. We can use a an object of one type where the related type is expected.
//      Two types are RELATED if there is a conversion between them
//      C++ defines a set of conversions to convert operands to a common type. The conversions are carried out automatically.  They are called IMPLICIT CONVERSIONS.
//      IMPLICIT CONVERSIONS occur when:
//          In most expressions when integral types smaller than int are first promoted to an appropriate larger integral type.
//          In conditions, non-bool values are converted to bool
//          In initialization the initializer is converted to the type of the variable.
//          In assignments - the right hand operand is converted to the left type
//          In arighmetic and relational expressions with operands of mixed types, the types are converted to a common type
//          Conversions also happen during function calls

// ARITHMETIC CONVERSIONS
//      The rules define a hierarhy of type conversions in which operands to an operators are conversted to the widest type.
//          INTEGRAL PROMOTIONS - convert the small integral types to a larger one: bool, char, signed char, unsigned char, short, unsigned short are promoted to
//          int if alll possible values of that type in an int. Otherwise the value is promoted to an unsigned int.
//              The largest char types - wchar_t, char16_t, char32_t - are promoted to the smallest type of int, unsigned int, long, unsigned long, long long or unsigned long long in which all possible values that char type fit.
//          If the operands have differing types, those operands are converted to a common type. If any operands are of unsigned type, the type to which the operands are converted depends on the relateive sizes of integgral types on the machine.
//              Integral promotions happen first. If the resulting types match, no further conversion is needed. If both (possibly promoted) operands have the same signedness then the operand with the smaller type is converted to the larger type.
//          When the signedness differ the type of the unsigned operand is the same as or larger than th esigned operand
//          the signed operand is converted to unsigned. The remaining case is when a signed operand has a larger type than the unsigned operand.
//          In this case the result is machine dependant. If all values in the unsigned type fit in the larger type , then the unsigned operand is ocnverted to the signed type.
//          If they don't fit hten the signed operand is converted to the unsigned type.
//

/*
bool flag;
short sval;
int ival;
long lval;
float fval;
char cval;
unsigned short usval;
unsigned int uival;
unsigned long ulval;
double dval;

3.13159L + 'a'; // 'a' promoted to int, then that int converted to long double;
dval + ival; // ival converted to double
dval + fval; // fval converted to double
ival = dval; // dval converted ( by truncation) to int;
flag = dval; // if dval is 0, then flag is false, otherwise true;
cval = fval; // cval promoted to int, then that int converted to float;
sval + cval; // sval and cval promoted to int;
cval + lval; // cval converted to long
ival + ulval; // ival converted to unsigned long
usval + ival; // promotion depends on the size of unsigned short and int;
uival + lval; // conversion depends on the size of unsigned int and long;
*/

// OTHER IMPLICIT CONVERSIONS
//      Array converted to pointer when used. Not occuring when usid with decltype, or as operand of address of (&) or typeid operators.
//          Also omited when we initialize a reference to array.
//      Pointer conversions
//          A constant int value of 0 and the literal nulptr can be converted to any pointer type.
//          A pointer to a non-const type can be converted to void*.
//          Any type can be converted to const void *.
//          Conversion to bool - automatic conversions from arithmetic or pointer type to bool. If either is 0 it yields false else true.
//          We can convert a pointer to non-cost to one to const (same with references)
//          Class types can define conversions that the compiler will do automatically. Only ONE class type conversion will be applied at a time.
//              Ex: char string literal is converted to string when assigned to a string. cin is converted to boolean when used in a condition.

// EXPLICIT CONVERSIONS
//      Named casts - cast-name<type> (epression); - if type is a reference then the result is an lvalue.
//          Casts: static_cast, dynamic_cast, const_cast and reinterpret_cast.
//          static_cast - any well defined conversion other than low-level const can be requested using static_cast.
//              ex: double slope = static_cast<double>(j) / i;
//              Usefull when a larger arithmetic type is assigned to a smaller type. The cast informs both the reader of the program and the compiler
//              that we are aware of and not concerned about the potentioal loss of precision.
//              The compiler would also generate a warning that's deactivated when the cast is used.
//              Also usefull to perform conversions the compiler would not automatically do.
//                  ex: retrieveing a pointer value that was stored in a void* - void *p = &d; double *dp = static_cast<double*> (p);
//                  We need to ensure that we cast the pointer to the orignal type else the results are undefined.
//          const_cast - changes only a low-level const in its operand.
//              Used to cast away the constness of an object. The compiler will no longer prevent us to write to that object.
//              If the object was not originally a const the action is legal, if it was then the results are undefined.
//              Only a const_cast can be used to change the constness of an expression, usage of other casts will result in a compiler error.
//              Usefull in overloaded functions.
//          reinterpret_cast - generaly performs a low-level reintepretation of the bit patter of its operands.
//              ex: int *ip; chat *pc = reinterpret_cast<char*>(ip);
//              This cast is dangeraous. Inherently machine dependant.
//              Safely usage of this cast requires completely understandint the types involved as well as the details of how the compiler implements the cast.
//          Old-Style Cast
//              ex: type (expr); // function-style cast notation | (type) expr; // C language style cast notation.
//              depending on the types involved, an old-style cast has the same behaviour as either of the 3 casts above.
//              When using an old-style cast where static or cost cast would be legal the cast does the same action as the respective named cast.
//              If neither casts are legal it performs a reinterpret_cast.
//              Old-style casts are less visible than are named casts. Because they are easily overlooked. It is more difficult to track down a rogue cast.


// STATEMENTS - executed sequentially. Usually sequential execution isn't adequate hence C++ also defines a set of flow-of-control statements.
//      A statement ends with a ;
//      An expression (on its own) followed by a ; becomes an expression statement
//      Null statement - a single ;    . Mostly used in a loop where logic can be done by the condition.
//          null statements should be accompanied by comments


// COMPOUND STATEMENTS - known as a block. Is a sequence of statements surrounded by { ... }
//      A bock is a scope.
//      Names defined in a block are accessible only within that block, their life ends with the block.
//      A block is not terminated with ;
//      We can also define an empty block {} which is equivalet to a NULL statement.

// STATEMENT SCOPE - The value of an object used in a control structure is used by that structure therefore such variables must be initialized.

// CONDITIOAL STATEMENTS
//      if - conditionally executes another staement based on whether a specifiec conditions is true.
//      There are two forms, one with an else branch or without.
//          The condition must be enclosed in () and convertible to bool.
//          When using nested if/else statements without curlybraces we cannot set what else will match what if.
//          for this we need to enclose the body of an if in curly braces so the else follows directly the ending }
//
//      switch - provides a convenient way of selecting among a number of fixed alternatives.
//          Can't be 2 cases with the same value. Can't be a non-cost or non-integer value.
//          To exit a witch we must use break keyword. - by omitting the break we allow the code to go through the remaining cases.
//          omitting a break is rare and if that's needed leave a comment for clarity.
//          Won't run any contents of a case until a match occurs. However once the execution starts it will go though the code of all remaining cases without matching untill a break is encountered;
//          default label - executed when no case matches. It is usefull to have a default label even if it is not needed. - defining an empty default label indicates to the readers that this option was considered.
//          It is illegal to initialize a variable in the case of a switch but it is ok to declare one.


// ITERATIVE STATEMENTS (loops) - repeated execution until a condition is true. The wile and for staements test the condition before executing the body. The do while executes the body then tests the condition.
//      while statement
//          repeatedly executes the body as long as the condition is true. while (condition) statement;
//          The condition may not be empty. if its first evaluation yields a false the body is not executed.
//          The condition can be an expression or an initialized variable declaration.
//          The condition must do something to change the value of the expression otherwise the loop may never terminate.
//          Variables defined in the while condition or while body are created and destroyed on each iteration.
//      traditional loops
//          the for + parahtesis are called for header
//          for (initializer; condition; expression) statement;
//          The initializer must be a declaration statement, an expression statement or a null statement. Each of these ends with a ;
//              intializer - used to initialize or assign a statrting value that is modified over the course of the loop.
//              condition serves as the loop control. as long as it is evaluated to true the loop is ran.
//              expression usually modifies the variable from init statement. The expression is evaluated after each iteration of the loop.
//              The statement can be either a single or compound statement.
//          Execution flow: init-statement(once) -> Condition -> Statement(body) -> Expression. Step 2, 3 and 4 repeated until the condition is evaluated to false.
//          The init statement can define several objects however it may be a single declaration statement. Therefore all variables must have the same base type.
//          A for header can omit all init, condition or expression statements. A null statement can be used. Omiting the condition is equivalent to writing true as the condition. In this case the body must have a condition that exits the loop.
//          When omitting the expression either the condition or the body must do something the avance the loop.
//      range for statement
//          New for used to iterate through the elements of a container: for (declaration : expression) statement;
//              expression must represent a sequence such as a braced initializer list, an array or an object such as a vector that has begin and end members that return iterators.
//              declaration defines a variable. It must be possible to convert each element of the sequence to the variable's type. The easiest way to ensure the types match is to use the auto type specifier.
//          If we want to write to the elements in a sequence the loop variable must be a reference. Else the loop declaration will provide a copy of the element in the sequence.
//          On each iteration the control variable is defined and initialized by the next value in the sequence.
//      do while statement
//          do statement while (condition); --- ends with a semicolon after the paranthesized contition.
//          statement is executed before the condition is evaluated.
//          condition cannot be empty. Variables used in condition must be defined outside the body of the do while statement.



// JUMP STATEMENT - interrut the flow of execution. C++ offers: break, continue, goto, return.
//      break - terminates the nerest enclosing while, do while, for or switch's case statement.
//          Execution resumes at the statement immediately following the terminated statement.
//          Applies individually ti cases hence usage of a break within a switch case won't terminate the switch but the case.
//      continue - terminates the curent iteration of the nearest enclosing loop and immediately begins the next.
//          Can only be used inside a for, while or dowhile.
//          A continue can be embedded in a switch only if the switch is embedded in an iterative statement.
//      goto - provides an unconditional jump from the goto to another statement in the same function.
//          Programs should not use gotos. They make the program hard to understand and hard to modify.
//          goto label
//          A labeled statement is any statement that is preceded by an identifier followed by a colon.
//              end: return
//              Label identifiers are independent of names used for variables and other identifiers.
//          Similar to switch a goto cannot transfer control from a point where an initialized variable is out of scope to a point where that variable is in scope.
//              Can't go to a point in code that uses a variable whose initialization was jumped.
//          goto allows back jumping as well, the transfer of control doesn't have to be downwards but upwards as well.
//
//


// TRY BLOCKS AND EXCEPTION HANDLING - generally used when a part of the program detects a problem it cannot solve.
//      throw EXPRESSIONS - which the detecting part uses to indicate the it encountered something it can't handle.
//          We say that "throw raises an exception"
//          usually followed by an exception that determines the type of exception thrown.
//          usually followed by a ; making it an expression statement.
//      try blocks - starts with try and ends with one or more catch clauses
//          try {program - statements } catch (exception-declaration) { handler-statements }
//          a try block is a regular block that starts with keyword try, anything within the block can be caught.
//          A catch consists of 3 parts, the keyword catch, a declaration of a possibly unabmed object within parantheses (exception declaration) and a block.
//              When a catch is selected to handle the exception, the associated block is executed.
//              Once the execution finishes, the control flow is retured immediately past the last catch block.
//              catch (runtime_error err) {} <- err is an object of type runtime_error
//              Each of the library exceptions defines a member function named what. take no arguments and return a C-style string.
//              returns a copy of the string used to initiate the error object.
//          If the code block throws an error, the handling catch is searched from the current block, to the parrent one so until a catch is found.
//          if one is not found the program will terminate.
//          Programs that properly "clean up" when throwing an exception are said to be exception safe.
//      A set of exception classes that are used to pass information about what happened between a throw and an associated catch.
//          STD exception classes:
//              runtime_error - one of standard libraries defined in stdexcept header.
//                  runtime_error must be initialized with a string.
//
//      The c++ library defines several classes ured to report problems encountred in functions.
//          exception header - most general kind of exception named exception. - Only communnicates that an exception occurred and nothing else.
//          stdexcept header - several general purpose exceptions
//              exception - most general
//              runtime_error - only detected at run time
//              range_error - result generated outside the range of values that are meaningful.
//              overflow_error - runtime error - computation that overflowed
//              underflow_error - runtime error - computation that underflowed
//              logic_error - error in the logic of the programm.
//              domain_error - logic error: argument for which no result exists.
//              invalid_argument - logic error: inappropriate argument
//              length_error - attempt to create an object larger than the maximum size for that type
//              out_of_range - logic error: used a value outide the valid range
//              ---
//              exception, bad_alloc & bad_cast can only be default initialized.
//          new header - bad_alloc exception
//          type_info - defines bad_cast exception type.
//



// FUNCTIONS - block of code with a name. executes code by calling the name. may take 0 or more arguments. can yield a result. Can be overloaded.
//      Executed through call operator. Type of call expression is the return type of the function.
//      A function call does two things: initalizes the function parameters from the corresponding arguments & transfers control to that function.
//      Execution of the calling function is suspended.
//      Execution ends when a return statement is encountered. Return does two things: transfers control aout of the called function &
//      The value returned by the function is used to initialize the result of the call expression.

// PARAMETERS AND ARGUMENTS
//      Arguments are used to initialize a function's parameters. We don't knwo the oder in which the parameters are initialized.
//      The type of each argument must match the type of each parameter.
//      The function must be passed the exact number of arguments the function requires, any other number results in error.
//
//      FUNCTION PARAMETER LIST
//          Can be empty but can't be omitted. Implicit void parameter list = empty (). For compatibility with c we can use (void)
//          Each parameter must have its type mentioned even though all parameters share the same type.
//          Parameters should have unique names and not be redeclared within the function body.
//          Parameter names are optional but without a name they can't be accessed.
//          Ocasionally a function has parameters that are not used, those can be left unnamed.
//
//      FUNCTION RETURN TYPE
//          Most types can be used as return types.
//          Can have void return type.
//          Can't be an arry of a function.


// LOCAL OBJECTS
//      Names have scopes & objects have lifetimes.
//          scope - part of the program in which that name is visible.
//          lifetime - time during the program's execution that the object exit.
//      As the body of the function is a statement block - we can define variables.
//          Params and objects defined inside a function's body are referred to as LOCAL VARIABLES.
//      Objects defined outside the body of a function exists thorughout the program's execution.
//
//      AUTOMATIC OBJECTS - objects that exists only while a block is executing.
//          Objects declared in function body are creatred when the function control passes thorugh the variable declaration.
//          And are destroyed when the control passes though the end of the block in which they are created.
//          Parameters are automatic objects. Storage for them is allocated when the function begins.
//
//      LOCAL STATIC OBJECTS
//          static keyword - can define variables within a function that is not destroyed when the function ends but when the program ends.
//          This way that variable persists through function calls.
//          Initialized before the control flow reaches its definition in code.
//          Will be default initialized if there is no explicit initializer.
//
//

// FUNCTION DECLARATIONS
//      The name of a function must be declared before we can use it. A function can be defined once but declared multiple times.
//      FUNCTION INTERFACE: return, name, parameters.
//      Function declarations should go into header files while definitions in source code. It is not illegal to declare a function within source code.
//      The source file that defines a function should include the header that contains that function's declaration. Thhat way the compiler iwll verify that the definition and declaration are consistent.


// SEPARATE COMPILATION
//      C++ offers the option to separately compile the files so when the project doesn't need to be unitarily recompilled.
//      The compiler will take either one file .o or multiple to compile into executable.
//      The action of using multiple files to produce an executable is called linking.


// ARGUMENT PASSING
//      Parameter initialization works the same as variable initailization
//      The type of the parameter determies the interation between tthe parameter and its argument
//          If the parameter is a reference then the parameter is bound to its argument. Otherwise the argument is copied.
//      When an argument is a reference we say that it was "passed by reference". And the function is called by reference. Otherwise "passed by value" & "called by value".
//      Pointers behave like any other non-reference type.  The copied pointer and the argument are distinct objects but they both point to the same object.
//      It can be inefficient to copy objects of  large class types or containres. More over some class types cannot be coiped.
//          Functions must use references to operate on such objects.
//      Functions should use references to const if they don't need to change the object.


// CONST PARAMETERS AND ARGUMENTS
//      Top level const are ignored. Hence we can pass a regular variable or a const when the function requires a const type.
//      In C++, we can define several different functions that have the same name as long as the parameter list is sufficiently different.
//          Because top-level const are ignored const type name and type name won't be considered different and will cause an error.


// POINTER OR REFERENCE PARAMETERS AND CONST
//      Use reference to const when possible
//      By requesting only non const parameters we restrict calling the function with const so any literal, or parent function receiving const may be affected.
//      We cannot past a const object or a literal or an object that requires conversion to a plain reference parameter.
//


// ARRAY PARAMETERS
//      Have two special properties:
//          Can't be copied so we can't pass them by value.
//          It is usually converted to a pointer. Passing an array to a function results in passing a pointer to the first element in that array.
//          Even if we cannot pass an array we can write a parameter type as a n aray which describes our intent but the type is seen as a pointer to first element.
//      As with any code that uses arays, functions that take array parameters must ensure that all uses of the array stay within array bounds.
//
//      Techniques used to manage array parameters.
//          Using a marker to specify the exetent of an array.
//              requires an end marker such as null char.
//              using this method we can loop through the array
void loopArray (const int *array) {
    if (array)
        while (*array)
            std::cout << *array++ << " ";
    std::cout << std::endl;
}
//          Using the standard library
//               By passing 2 arguments one to the first element and one to the one past last element
//               One way is by using the begin and end functions from standard library
void loopArray (const int *beg, const int *end) {
  while (beg != end)
      std::cout << *beg++ << std::endl;
}
//          Passing a 2nd parameter for the size.
void loopArray(const int ia[], size_t size) {
  for (size_t i = 0; i != size; ++i)
      std::cout << ia[i] << std::endl;
}
//
//      Array parameters and const - it is recommended to use a pointer to const anytime the function does not have to change the elements.
//      Array reference parameters - just as we can define a variable that is a reference to an array we can define a parameter that is a reference to array
void loopArray (int (&arr) [10]) {
    for (auto elem : arr)
        std::cout << elem << std::endl;
}
//
//      Passing a multi demensional aray
//          There are no multi dimensional arrays in C++ - all arays are converted to pointers. Pointer to the first element of an array that points to the first element of the inner array.
//          Because we are dealing with an array of arrays, that element is an array so the pointer is a pointer to an array. The size of the second (and any subsequent) dimension
//          is part of the element type and must be specified.
//  matrix points to the first element in an array whose elements are arrays of ten ints
void print (int (*matrix) [10], int rowSize) { /* ... */ };
//void print (int matrix[] [10], int rowSize) { /* ... */ }; // the compiler ignores the first dimension so its best to ignore it.



// MAIN FUNCTION
//  Takes two arguments:
//      int argc - length of argv array
//      char *argv[] - c style array of strings.
//  The first string in argv is the program name


// FUNCTIONS WITH VARYING PARAMETERS
//  To pass an undetermined number of arguments to a function we have two options:
//      initializer_list - allows us to pass an array of arguments of the same type.
//          operations offered by initializer_list
//              initializer_list<T> lst; - default initialization, empty list of elements of type T.
//              initializer_list<T> lst {a,b,c...}; - lst has as many elements as there are initilizers.  Elements are copies of the corresponding initializers. Elements are const.
//              lst2(lst) - copy or assignig an initializer_list does not copy the elements in the list.
//              lst2 = lst - After copy, the original and copy share the elements.
//              lst.size() - number of elements in list
//              lst.begin() - returns a pointer to first
//              lst.end() -  or one past last element in lst.
//          Similar to vectors the initializer_list is a template type which requires providing a type. In comparison to vectors elements in initializer_list are const.
//          Given that initializer_list is an array we must pass elements within {}
//      If the arguments differ we can write a special function known as VARIADIC TEMPLATE
//  C++ also has a special parameter type ELIPSIS that can  be used to pass varying number of args. This facility is only used in params that need to inteface with C functions.
//      Used to interface with C code taht usec C libraary named varargs.
//      Should be only used for types that are common to both C and C++. Objects of most class types are not copied properly when passed to an ellipsis parameter.
//      May appear only as the last element in a parameter list and may take one of two forms: void foo (...) or void foo (param_list, ...);
//          The first form specifies the type for some of foo's parameters. No type checking is done for arguments that correspond to ellipsis parameter.
//          In the first form, the comma following the parameter declaration is optional.


// RETURN TYPES AND THE return STATEMENT
//  Terminates function and returns control to caller.
//  Has two forms: return; and return expression;
//
//  Functions with no return value - do not have to contain a return as an implicit return takes place after the last statement.
//      Typically void functions use return to exit the function at an intermediate point. - this return is similar to break.
//      A void function may use the second form of the return (with expression) only to return the result of calling another function that returns void.
//          Returning any other expression from a void function is a compile time error.
//
//  Functions that return a value -
//      Any function that does not have void return type must return a value.
//      The returned value must have the same type as the return type or it must have a type that can be implicitly converted to that type.
//      The compiler does not guarantee to fail the ocmpilation if a return is missing.
//      Failing to provide a return after a loop that contains a return is an error that the commpiler may not detect.
//
//  How values are returned
//      The return value is used to initilize a temporary at the call site, and that temporary is the result of the function call.
//          It is important to keep in mind initialization reles in function that return local variables.
const std::string &shorterString (const std::string &s1, const std::string &s2) { return s1.size() <= s2.size() ? s1 : s2; }; // param and return type are references = not copied.
//     Never return a reference or a pointer to a local object. That object will be deleted when the function ends and the result is undefined.
//          This does not happen with non-reference or pointer variables as copies are returned.
//          TIP: One good way to ensure that the return is safe is to ask: To what preexisting object is the reference referring?
//
//  Functions that return class types and the call operator.
//      If pointers, references or objects of class type are returned from a function we can use the result of a call to call a member of the resulting object.
//
//  Reference Returns are Lvalue
//      A call to a function that returns an lvalue can be used as any lvalue.
//
//  List Initializing the return value
//      Following C++ 11 functions can return braced list of values;
//      As with any return the list is used to initalize a temporary that represents the function's return. If the list is empty the temporary is value initialize.
//      In a function that returns a built-in type, a braced list may contain at most one value, and that value must not require a narrowing conversion.
//      If the function returns a class type, then the class itself define how initializers are used.
//
//  Return from main
//      Does not require a return value. If the control reaches the end and there is no return statement a return 0; is implicitly inserted.
//      The non-zero has a machine dependent meaning. To make return values machine independent we can use cstdlib header variables EXIT_FAILURE and EXIT_SUCCESS.
//      Because those are preprocessor variables we must not precede them with std:: nor may we mention them in any declarations.
//
// RECURSION
//      A function that calls itself.
//      The main function may not call itself.
//      Recursive functions MUST have an escape condition.
//
// Returning a pointer to an array
//      Because we cannot copy an array, a function cannot return an array. It can however return a pointer or a reference to an array.
//      The syntax to return a pointer or references to arrays can be complex/confusing. By using using or typedef we can create aiases for the type making the call more readable.
//
// Declaring a function that returns a pointer to an array
//      We need to remember that the dimension of an array follows the name being defined - meaning the name needs to be within () so the precedence is correct.
//      The form of a function that returns a pointer to an array is Type (*function (parameter_list)) [dimension]
//
//  Using a trailing return type
//      The trailing return type allows passing the return type after the function while using auto in the original location.
//      To pass at trailing return we use -> following a functino parameter list.
//      auto func (int i) -> int(*)[10]; - as the * is in () it applies to the name, so the function returns a pointer to an array of 10 ints.
//  Using decltype
//      If there is a variable with the same type of the function return type then we can use decltype to infer the type and use it as return value.
//      Remember: decltype does not do pointer conversion so we'd need to manually add some elements such as * oberator for returning pointers.


/*
 *Top-level const: Applies to the object itself (e.g., whether a pointer is constant). The compiler ignores this in function overloading.
 *Low-level const: Applies to the data pointed to by the pointer or reference. The compiler considers this in function overloading.
*/


// OVERLOADED FUNCTIONS
//  Are functions with the same name but different parameter list and that appear in the same scope.
//      When we call the functions, the compiler can deduce which function we want based on the argumment type we pass.
//  Function overloading eliminates the need to invent and remember names that exist only to help the compiler which function to call.
//  The main may not be overloaded.
//  Only overload functions that actually do similar things.
//
//  Defining Overloaded Functions
//      We can use the same name and return type as long as the parameter list differ, when calling the function we only need to pass the parameter type for the function we intend to call.
//      It is an error for only the return type to differ, the compiler will retort this as "only the return type is different"
//
//  Determining whether two parameter types differ.
//      Parameter names are ignored.
//      Using type alias won't cause the compiler identify a difference between types. The aliased type is the same as the type it references.
//
//  Overloading and const Parameters
//      We can overload based on wheter the parameter is a reference/pointer to a given type. Such consts are low-level.
//      The compiler will ignore top level const.
//
//  Calling an Overloaded function
//      Function matching or overload resolution is the process by which the compiler selects the functtion that matches the arguments of the call.
//      For any given call to an overloaded function there are three outocmes
//          The compiler finds exactly one function that is a best match for the actual arguments and generates code to call that function.
//          There is no function with parameters that match the arguments in the call. In which case the compiler issues an error message that there was no match.
//          There is one more function that matches and none of the matches is clearly best. This case is also an error; it is an anbiguous call.
//
//  Overloading and scope
//      If there are overloaded functions declared in the outer scope they will be overwritten (all) by a function with the same name in the inner scope.
//      In c++ name lookup happens before type checking.
//      When calling a function, the compiler first looks for a declaration of that name.
//          Once the name is found the compiler ignores the use of that name in the outer scope.
//          Declaring all the overloaded functions in the same scope would allow the  compiler to see the functions in the inner scopes.


// FEATURES FOR SPECIALIZED USERS
//      DEFAULT ARGUMENTS
//          string screen (sz wid = 80, char bg = '');
//          A default argument is specified as an initializer for a parameter in the parameter list.
//          If a parameter has a default argument, all the parameters that follow must also have default arguments.
//
//          Calling a function with default arguments
//              If we want to use the default arguments, we omit these arguments when we call the function.
//              Arguments in calls are resolved by position. The default arguments are used for the trailing - most right arguments.
//                  If there are 3 parameters with default arguments we whould have to provide all 3 arguments when the intention is to provide a value for the 3rd
//                  the alternative being to change the order.
//              Part of the work of designing a function is ordering of the parameters so that those least likely to use a default value appear first and those most likely appear last.
//
//          Default arguments declarations
//              Given that function redeclaration is possible, each parameter can have its default specified only once in a given scope.
//                  Thus any subsequent declarations can add a default only for a parameter that has not previously given a default.
//              As usual, defaults can be specified only if all parameters to the right already have defaults. For ex.
//                  string screen(sz, sz, char = ' '); -- no default for the height or width parameters.
//                  we cannot change an already declared default value
//                  string screen(sz, sz, char = '*');  -- error:redeclaration
//                  but we can add a default argument as follows:
//                  string screen (sz = 24, sz = 80, char); -- ok: adds deafault arguments
//              BEST PRACTICES: Default arguments ordinarily should be specific with the function declaration in an appropriate header.
//
//          Default arguments initializers
//              Local variables may not be used as  default arguments. Excepting that restriction, a default arguments can be any expression that has a type that is convertible to the type of parameter.
//              Names used as default arguments are resolved in the scope of the function declaration. The value that those name represent is evaluated at the time of the call.
//                  If the names used to declare default arguments are updated in the local scope they won't affect the function defaults.
//
//          Inline and constexpr functions
//              An inline function call is expanded into its function source code at each call location.
//              Regular function calls are likely to be slower than an equivalent expression.
//              NOTE: The inline specification is only a request to the compiler. It might chose to ignore it
//              The inline mechanism is meant to optimise, small, straight-forward functions that are called frequently.
//              Many compilers will not inline a recursive function nor a large function.
//
//          constexpr functions
//              A function that can be used in a constant expression.
//              A function that is defined like any other function but must:
//                  have return type and parameter type as literals
//                  the function body must contain exactly one return statement.
//              constexpr int new_sz() { return 42; }
//              When the compiler can confirm that the return of the function is a constant expression it well replace the function with the code.
//              A constexpr function may contain other statements that have no action at return time such as null statements, type aliases and usign declarations.
//              A constexpr function is permitted to return a value that is not a constant as long as the parameter is a constant expression.
//
//          Put inline and constexpr function in header files
//              inline functions may be defined multiple times in the program. However all the definitions of a given inline or constexpr must match exactly.
//                  As a result, inline and constexpr functions normally are defined in headers.
//
//          Using reference parameters to return additional information
//              As functions can only have a single return value but some functions require multiple return values we can use reference parameters to store part of the values that are to be returned.



// AIDS FOR DEBUGGING
//  C++ preprocessor offers 2 more facilities that aid in debugging code: assert and NDEBUG.
//      assert
//          is a preprocessor macro <- a preprocessor variable that acts somewhat like an inline function. The assert macro takes a sigle expression which it used as a condition.
//              it evaluated the expression and if false it writes a message and terminates the program, if true it does nothing.
//          the assert is found in cassert header.
//          It is recommended to avoid usign the name assert as other programs we include are likely to includ e this faicility.
//      NDEBUG
//          The behaviour of assert depends on the status of a preprocessor variable named NDEBUG. If it is defined, assert does nothing.
//              By default NDEBUG is not defined so assert performs a run-time check. We can turn off debuggging by providing a #define NDEBUG.
//              Alternatively most compilers provide a command-line option tha tlet us define preprocessor variables
//              $ CC -D NDEBUG main.c # use /D with Microsoft compiler. <- has the same effect as writting #define NDEBUG at the beggining of main.
//          Only use assert to verify things that truly should not be possible.
//          Assert should not be used to substitute run-time logic checks or error checking that the program should do.
//          Additionally we can use NDEBUG to write our own conditional debugging.
//              If NDEBUG is not defined the code between #ifndef and #endif is executed.
//              __func__ is a local static defined by the compiler that holds the function name.
//              #ifndef NDEBUG
//                  cer << __func__ << ": array size is " << size << endl;
//              #endif
//          There are 4 more names that are defined by the preprocessor that can be used in debugging.
//              __FILE__  string literal containing the name of the file.
//              __LINE__ integer literal containing the current line number.
//              __TIME__ string literal containing the time the file was compiled.
//              __DATE__ string literal containing the date the file was compiled.
//          We might use these constants to report additinoal informatino on error messages.
//              These constants can be used anywhere in code, not only in asserts.

void printError (bool c, std::string message) {
    std::cerr << "Error: " << __FILE__
                << " : in function " << __func__
                << " at line " << __LINE__ << std::endl
                << "      Compiled on " << __DATE__
                << " at " << __TIME__ << std::endl
                << message << std::endl;
}


// FUNCTION MATCHING
//      In most cases it is easy to figure out which overloaded function matches a given call. However it is not simple when the overloaded functions
//          have the same number of parameters and when one or more of the parameters have types that are related by conversions.
//
//      Determining the Candidate and Viable functions
//          The first step of function matching identifies the set of overloaded functions considered for this call.
//              These functions in the set are candidate functions
//                  A candidate function is a function with the same name as the called function and for which a declaration is visible at the time of the call.
//          The second step is to select from the set of candidate functions the functions that can be called with the arguments in the given call.
//              The selected functions are the viable functions. To be viable, a function must:
//                  have the same number of parameters as there are arguments in the call
//                  the type of each argument must match or be convertible to the type of the corresponding parameter.
//              If there are default arguments a call may appear to have fewer arguments that it actually does.
//          The third step of function matching determines which viable function provides the best match for the call.
//              The process looks at each argument in the call and selects the viable function or functions for which the corresponding parameter best matches the argument.
//              Best = closer the types of the argument and parameter are to each other the better the match.
//              When types are exactly the same and no conversion is required then the match is considered exact. An exact match is preferred over a type conversion.
//
//          Function matching is more complicated when there are more than 1 parameter. The process is the same until the 3rd step where the compiler checks the parameter/arguments one by one.
//              There is an overall best match if there is one and only one function for which:
//                  The match for each argument is no worse than the match required by any other viable function.
//                  There is at laest one argument for which the match is better than the match provided by any other viable functions.
//                  If after looking at each argument there is no single function that is preferable, then the call is in error and the compiler will complain.
//
//
//      ARGUMENT TYPE CONVERSION
//          In order to determine the best match, the compiler ranks the conversion that could be used to convert each argument to the type of its corresponding parameter.
//          Conversions are rakned as follows:
//              1. An exact match. An exact match happens when:
//                  The argument and parameter types are identical.
//                  The argument is converted from an array of function type to the coresponding pointer type.
//                  A top-level const is added to or discarted from the argument.
//              2. Match through a const conversion.
//              3. Match through a promotion.
//              4. Match through an arithmetic or pointer conversion.
//              5. Match through a class-type conversion.
//          Promotions and conversions among the built-in types can yield surprising results in the context of function matching.
//          Important to remember: small integrals are always promoted to int or larger integral type. Given 2 functions one that take an int and one that takes a short.
//              The short version is only called for specifically a short argument. Any other smaller size that may seem to better fit a short will be promoted to an int.
//          All arithmetic conversions are treated as equivalent to each other.
//              For example conversion from int to unsigned int does not take precedence over int to double.
//
//      FUNCTION MATCHING AND const ARGUMENTS
//          When we call an overloaded function that differs on whethe a reference or a pointer parameter refer or points to a const, the compiler uses
//              the constness of the argument to decide which function to call.
//
//              Record lookup (Account &); // function that takes reference to Account.
//              Record lookup(const Account&); // new  function that takes a const reference.
//              const Account a;
//              Account b;
//              lookup(a); - calls lookup (const Account &)
//              lookup(b); - calls lookup (Account&)


// POINTERS TO FUNCTIONS
//  A function pointer is a regular pointer that points to a function rather than a regular object. To declare a function pointer we surround the name of the function in (* name).
//  The () are necessary as without we definea function that returns a pointer to the return type. The pointer type is determined based on the return & parameter types.
//
//      Using function pointers
//          When we use the name of a function as a value the function is automatically converted to a pointer. eg pf = lengthCompare; or pf = &lengthCompare;
//              both variants point to a function however the optimal way is by using the address-of operator.
//          A pointer to a function can be used to call the function. The dereference is automatic hence the name does not require use of *name.
//              Ex: pf("hello", "world") = (*pf) ("hello", "world")
//          There is no conversion between pointers to one function type and pointer to another function type. We can however assign nullptr or a
//              zero-value integer constant expression to a function to indicate that the pointer does not point to any function.
//
//      Pointers to overloaded functions.
//          When using an overloaded function, the context must make it clear what function is being used. When we declare a pointer to an overloaded function the compiler uses the
//              the type of the pointer to determine which overlaoded function to use. The type of the pointer must match one of the overloaded functions exactly.
//              The compiler will return errors if the context does not match an existing function.
//              eg: void ff (int*); void ff(unsigned int); void (*pf1) (unsigned int) = ff; // pf1 points to ff (unsigned)
//
//      Functions to pointer parameters
//          Just as with arrays, we cannot define a parameters of function type but we can have a parameter that is a pointer to a function. We can write a parameters that
//              Looks like a function type but it will be treated as a pointer.
//          useBigger(const string &s1, const string &s2, bool pf(const string &, const string &)) - 3rd parameter is a function type treated as a pointer to a function.
//          useBigger(const string &s1, const string &s2, (*pf) (const string &, const string &)); - equivalent declaration: explicitly define th eparameters as a pointer to function.
//
//          When we pass a function, we can do so directly. It will be automatically converted to a pointer.
//          As we can imagine typing function pointer types can be tedious. It is recommended the usage of type aliases along with decltype to simplify the code.
//          typedef bool Func(const string&, const string&); typedef decltype (lengthCompare) Func2;   both have function type. equivalent type.
//          typedef bool (*FunctP)(const string&, const string &); typedef decltype (lengthCompare) *FuncP2; both have pointer to function type.
//
//          NOTE: decltype() returns a function type and so if we want a pointer we must add *.
//
//      Returning a pointer to function
//          Same as with arrays we cannot return a function type but we can return a pointer to a function type. Hence we must write the return type as a pointer.
//              The compiler will not automatically treat a function return type as the corresponding type.
//          The easiest way to declare a function that returns a pointer to afunction is by using a type alias:
//              using F = int(int*, int); - F is a function type
//              using PF = int(*) (int*, int); - PF is a pointer type.
//          NOTE: Compared to parameters the return type is not automatically converted to a function hence we must explicitly specify that the return type is a pointer.
//              PF f1(int); // ok: PF is a pointer to function, the return is a pointer to function.
//              F f1 (int); // error: F is function type, f1 can't return a function.
//              F *f1 (int); // ok: explicitly specify that the return type is a pointer to function.
//
//          We can also declare f1 directly: int (*f1(int)) (int *, int);
//              Reading from inside out. f1 has a parameter list so it is a function.
//              By being preceded by * we conclude that it returns a pointer.
//              The returned pointer type is a function given by the parameter list.
//              Based on the int we can conclude that the pointer function returns an integer.
//
//          We can also simplfy the declarations of functions that return pointer to function by using a trailing return. auto f1(int) => int (*) (int*, int);
//
//      Using auto or decltype for function pointer types
//          If we know which functions we want to return, we can use decltype to simplyfy writing a function pointer  return type.
//              Eg. Having the already existent functions that we'l like to use we can create a new function that based on a given string/number returns
//              a pointer to the function that matches the input. The only detail that needs not to be forgotten is that we need to explicitly say
//              that the type of the return function is a pointer.
//



// CLASSES
//  Fundamental ideas behind classes are data abstraction and encapsulation.
//      Data abstraction - programin & design technique that relies on the separation of the interface and implementation.
//          Interface of a class - operations that the user of a class can execute.
//          Implementation - includes the class data members, the bodies of the functions that constitute the interface and any functions needed to define
//              the class that are not intended for general use.
//      Encpasulation - enforces the separation of a class interface and implemetation. A class that is encapsulated hides the implementation - users of the class can use the interface.
//      A class taht uses data abstraction and encapsulation defines an abstract data type. In an abstract data type, the class designer worries about how
//          the class is implemented. Programmers who use the class need not know how the type works.
//          They can instead think abstractly about what the type does.
//

// DEFINING ABSTRACT DATA TYPES
//  Functions defined in class are implicitly inline.
//  Defining member function
//      Although every member must be declared inside its class, we can define a member function's body either inside or outside of the class body.
//      When we call a member function we do so on behalf of the boject. When a function refers to members of the class it is refering implicitly to
//          the members of the object on which the function was called.  When a function is called any data member used in the body is taken from the class.
//          For example function isActive() { return isActive } will return the object.isActive property of the class.
//      Member functions access the object on which they were called through an extra, implicit parameters named this.
//          When we call a memebr function, this is initialized with the address of the object on which the function was invoked.
//          For example: Sales_data::isbn(&total);
//      Inside a member function, we can refer directly to the members of the object on which the function was was called. We do not have to use a
//          member function access operator to use the members of the object to which this points. Any direct use of the member of the class is assumed to be
//          an implicit reference through this. As if we'd say this -> bookNo to derefernnce the object and get the bookNo.
//      It is illegal to definea parameter or variable named this.
//
//  Const member functions
//      const that follows the parameter list = indicates that this pointer is a pointer to const. Member functions that use const in this way are const member functions.
//      The purpose of const used after parameter list is to modify the type of the implicit this pointer. By default this is a const pointer to a non-cost version
//          of the class type. The fact that this is a pointer to const means that cost memeber functions cannot change the object on which they are called.
//      Objects that are const and references or pointers to const objects, may call only const member functions.
//
//  Class scope and member functions
//      A member function can access a data member even if the data member is defined after the function itself (within a class). The compiler processes
//          the classes in two steps. The member declarations are compiled first, after which the member function bodies if any are processed. This
//          way member function bodies may use other members of their class regardless of where in the class those members appear.
//
//  Defining a member function outside a class
//      As with any other function, when we define a member function outside the class body, the members's definition must match its declaration.
//          That is, the return type, parameter list and name must match the declaration in the class body. If the member function was declared as
//          a const member function, then the definition must also specify const after parameter list.
//      The name of a member defined outsite the class must include the name of the class on which it is a member.
//          Ex: return_type class_name::member_name(parameters) const { ... };
//      Once the compiler sees the function name, the rest of the code is interpreted as being inside the scope of the class.
//
// Defining a function to return this object.
//      Having a function "combine" that is intended to act likea  compound assignment operator += where the object on which the function is called
//          represents the left-hand operand. The right-hand operand is passed as an explicit argument.
//
//      Sales_data& Sales_data::combine(const Sales_data &rhs) {
//          units_sold += rhs.units_sold;
//          revenue += rhs.revenue;
//          return *this; return the object on which the functino was called.
//      When our program calls total.combine(trans); the address of total is bound to the implicit this parameter and rhs is bound to trans.
//          Thus, when combine executes units_sole += rhs.units_sold; the effect is to add total.units_sold and trans.units_sold, storing the
//          result back to the total.units_sold.
//
//  Defining nonmember class-related functions
//      Functions that are conceptually part of a class, but are not defined inside the class are tipically declared (but not defined) in the same header
//          as the class itself.
//      Ordinarily, nonmember functions that are part of the interface of a class should be declared in the same header as the class itself.
//      Functions that do output (print) should do minimal formating so the user can decide how to format.
//      By default copying a class object coies that object's members.
//      A non-member class-related function is usually ment to work with the class objects. For example reading something to the object,
//          printing from the object, working with more than one object.
//      Non-member functions will take a class object as a reference so they won't be copied unless needed.
//

// CONSTRUCTORS
//  Are class functions meant to initialize the data members of a class object.
//  A constructor is run whenever an object of a class type is created. The choice of which constructor is called depends on how the object is being
//  created and the arguments provided during the object's instantiation.
//




