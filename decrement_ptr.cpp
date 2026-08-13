#include <iostream>
using namespace std;

int main()
{
    int n;
    int *p;

    cin >> n;
    p = &n;

    (*p)--;

    cout << "After decrement = " << *p;

    return 0;
}
