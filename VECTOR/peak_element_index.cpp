#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {

    int st = 1;
    int end = arr.size() - 2;

    while (st <= end) {

        int mid = st + (end - st) / 2;

        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid]) {
            st = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {

    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = peakIndexInMountainArray(arr);

    cout << "Peak index = " << ans << endl;

    return 0;
}
