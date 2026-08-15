#include <iostream>
using namespace std;

int main()
{
    int n;
    int *p;

    cout << "Enter a number: ";
    cin >> n;

    p = &n;

    cout << "Predecessor = " << *p - 1 << endl;

    return 0;
}
