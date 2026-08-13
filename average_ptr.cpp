#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *p, *q;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p = &a;
    q = &b;

    cout << "Average = " << (*p + *q) / 2.0 << endl;

    return 0;
}
