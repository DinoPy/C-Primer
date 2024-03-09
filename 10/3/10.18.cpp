#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::unique;
using std::vector;

void elimDups(vector<string> &words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

string make_plural(string::size_type len, string s1, string s2) {
    if (len > 1)
        s1 += s2;
    return s1;
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    stable_sort(
        words.begin(), words.end(),
        [](const string &a, const string &b) { return a.size() < b.size(); });
    auto wc = partition(words.begin(), words.end(),
                      [sz](const string &a) { return a.size() < sz; });
    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << " of length "
         << sz << " or longer" << endl;
    for_each(wc, words.end(), [](const string &s) { cout << s << " "; });
    cout << endl;
};

int main(int argc, char *argv[]) {
    vector<string> svec{"ab", "ba", "ca", "arstarta"};
    biggies(svec, 5);
    return 0;
}

/*
The library defines an algorithm named partition that takes a pred- icate and
partitions the container so that values for which the predicate is true appear
in the first part and those for which the predicate is false appear in the
second part. The algorithm returns an iterator just past the last element for
which the predicate returned true.
*/
