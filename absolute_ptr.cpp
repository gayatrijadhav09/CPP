#include <iostream>
using namespace std;

int main()
{
    int n;
    int *p;

    cin >> n;
    p = &n;

    if (*p < 0)
        *p = -*p;

    cout << "Absolute value = " << *p;

    return 0;
}
