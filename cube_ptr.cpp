#include <iostream>
using namespace std;

int main()
{
    int n;
    int *ptr;

    cout << "Enter a number: ";
    cin >> n;

    ptr = &n;

    cout << "Cube = " << (*ptr * *ptr * *ptr) << endl;

    return 0;
}
