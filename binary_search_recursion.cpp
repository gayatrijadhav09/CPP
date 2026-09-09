#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int start, int end, int key)
{
    if (start > end)
        return -1;

    int mid = (start + end) / 2;

    if (arr[mid] == key)
        return mid;

    if (key < arr[mid])
        return binarySearch(arr, start, mid - 1, key);

    return binarySearch(arr, mid + 1, end, key);
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};

    int key;
    cout << "Enter element: ";
    cin >> key;

    int result = binarySearch(arr, 0, arr.size() - 1, key);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
