#include <iostream>
using namespace std;

int main()
{
    int n;
    int *p;

    cout << "Enter a number: ";
    cin >> n;

    p = &n;

    if (*p % 5 == 0)
        cout << "Number is divisible by 5" << endl;
    else
        cout << "Number is not divisible by 5" << endl;

    return 0;
}
