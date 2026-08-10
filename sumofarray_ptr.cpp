#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *ptr;
    int sum = 0;

    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    ptr = arr;

    for (int i = 0; i < 5; i++)
        sum = sum + *(ptr + i);

    cout << "Sum = " << sum << endl;

    return 0;
}
