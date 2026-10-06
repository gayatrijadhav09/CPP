#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "abcdef";

    if (binary_search(s.begin(), s.end(), 'd'))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}
