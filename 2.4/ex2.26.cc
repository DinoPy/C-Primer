/*
    Exercise 2.26: Which of the following are legal? For those that are illegal, explain why.
(a) const int buf; (b) int cnt = 0; (c) const int sz = cnt; (d) ++cnt; ++sz;
a. is not legal as consts need to be initialised given that they can't be changed after that.
b. Valid
c. Valid
d. ++cnt - valid but ++sz is invalid as sz is a const.
*/