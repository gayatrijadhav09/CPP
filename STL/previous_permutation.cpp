#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "abc";

    prev_permutation(s.begin(), s.end());

    cout << s << endl;

    return 0;
}
