#include <iostream>
using namespace std;

int main()
{
    int n;
    int *p;

    cout << "Enter a number: ";
    cin >> n;

    p = &n;

    cout << "Half = " << *p / 2.0 << endl;

    return 0;
}
