#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;

    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[minIndex])
        {
            minIndex = i;
        }

        if(arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);

    cout << "After swapping: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
