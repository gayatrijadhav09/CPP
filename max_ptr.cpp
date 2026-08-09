#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *p1, *p2;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;

    if (*p1 > *p2)
        cout << "Maximum = " << *p1 << endl;
    else
        cout << "Maximum = " << *p2 << endl;

    return 0;
}
