#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 7, 9};

    if (binary_search(v.begin(), v.end(), 5))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}
