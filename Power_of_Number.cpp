#include <iostream>
using namespace std;

int main()
{
    int base, power, result = 1, i = 1;

    cin >> base >> power;

    while(i <= power)
    {
        result = result * base;
        i++;
    }

    cout << result;

    return 0;
}
