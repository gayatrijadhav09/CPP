#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = 6;

    sort(arr, arr + n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//o(nlogn)
