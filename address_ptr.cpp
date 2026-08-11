#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int *p = &n;

    cout << "Value = " << n << endl;
    cout << "Address = " << p << endl;

    return 0;
}
