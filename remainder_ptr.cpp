#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *p, *q;

    cin >> a >> b;

    p = &a;
    q = &b;

    cout << "Remainder = " << *p % *q;

    return 0;
}
