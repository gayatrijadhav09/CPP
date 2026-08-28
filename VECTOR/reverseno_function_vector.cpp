#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>&val) {
    int start = 0;
    int end = val.size() - 1;

    while (start < end) {
        swap(val[start], val[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> val = {1, 2, 3, 4, 5};

    reverseVector(val);

    for (int x : val) {
        cout << x << endl;
    }

    return 0;
}
