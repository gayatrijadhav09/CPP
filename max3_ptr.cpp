#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int *p, *q, *r;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    p = &a;
    q = &b;
    r = &c;

    if (*p >= *q && *p >= *r)
        cout << "Maximum = " << *p << endl;
    else if (*q >= *p && *q >= *r)
        cout << "Maximum = " << *q << endl;
    else
        cout << "Maximum = " << *r << endl;

    return 0;
}
