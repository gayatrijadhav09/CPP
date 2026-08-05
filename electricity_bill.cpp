#include <iostream>
using namespace std;

float bill(int units)
{
    if(units <= 100)
        return units * 5;
    else
        return 100 * 5 + (units - 100) * 7;
}

int main()
{
    int units;
    cin >> units;

    cout << "Bill = " << bill(units);

    return 0;
}
