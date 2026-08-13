#include <iostream>
using namespace std;

int main()
{
    int n;
    int *p;

    cin >> n;
    p = &n;

    cout << "Double = " << *p * 2;

    return 0;
}
