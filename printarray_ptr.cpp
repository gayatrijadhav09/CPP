#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *ptr;

    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    ptr = arr;

    cout << "Array elements: ";

    for (int i = 0; i < 5; i++)
        cout << *(ptr + i) << " ";

    cout << endl;

    return 0;
}
