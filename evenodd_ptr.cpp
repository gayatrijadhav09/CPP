#include <iostream>
using namespace std;

int main()
{
    int n;
    int *ptr;

    cout << "Enter a number: ";
    cin >> n;

    ptr = &n;

    if (*ptr % 2 == 0)
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;

    return 0;
}
