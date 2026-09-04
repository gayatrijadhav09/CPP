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

    cout << "Addition = " << (*p1 + *p2) << endl;
    cout << "Subtraction = " << (*p1 - *p2) << endl;
    cout << "Multiplication = " << (*p1 * *p2) << endl;

    if (*p2 != 0)
    {
        cout << "Division = " << (*p1 / *p2) << endl;
        cout << "Modulus = " << (*p1 % *p2) << endl;
    }
    else
    {
        cout << "Division and modulus not possible by zero." << endl;
    }

    return 0;
}
