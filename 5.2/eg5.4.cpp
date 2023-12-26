#include <iostream>
#include <string>
#include <iterator>

using std::string;
using std::iterator;

bool find (string word) {
    return false;
};
int main (int argc, char *argv[])
{
    string s = "Hello World";
    string::iterator iter = s.begin();
    while (iter != s.end()) { std::cout << *iter << std::endl; ++iter; }
    /* We first need the iter initialized outside the while loop so within we only do the comparison expression and get to the body loop. An initialized variable doesn't require to have its type attached.
     * while the declaration of iter is possible within a loop reach run of the loop would redeclare which isn't the intended objective.
     * the loop compares iter's position with s.end() and runs the loop if the addresses don't match.
     * the increment of iter needs to happen within loop body not to have an infinite loop.
     */
    string word = "Word";
    while (bool status = find(word)) { std::cout << status << std::endl; };
    // The loop uses find to conclude if word can be found, the result is assigned to bool status and evaluated. The assignment in this case is not necessary as it reoccurs each run and status value is not needed elsewhere hence we can only have find(word) evaluated whose return is a boolean.
    /* while body is meant to check an expression for a boolean type result. The
     */
    bool status = false;
    if (!status) { std::cout << "No" << std::endl;}
    // checks if status value is not true and run's the block.
    return 0;
}
