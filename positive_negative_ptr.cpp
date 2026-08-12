#include <iostream>
using namespace std;

int main()
{
    int n;
    int *p;

    cin >> n;
    p = &n;

    if (*p > 0)
        cout << "Positive";
    else if (*p < 0)
        cout << "Negative";
    else
        cout << "Zero";

    return 0;
}
