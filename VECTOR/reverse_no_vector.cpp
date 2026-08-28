#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> val = {1, 2, 3, 4, 5};

    int start = 0;
    int end = val.size() - 1;

    while (start < end) {
        swap(val[start], val[end]);
        start++;
        end--;
    }

    for (int x : val) {
        cout << x << endl;
    }

    return 0;
}
