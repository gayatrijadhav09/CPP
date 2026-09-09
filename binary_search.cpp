#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;

        else if (key < arr[mid])
            end = mid - 1;

        else
            start = mid + 1;
    }

    return -1;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};

    int key;
    cout << "Enter element: ";
    cin >> key;

    int result = binarySearch(arr, key);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
