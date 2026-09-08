#include <iostream>
using namespace std;

float fahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}

int main()
{
    float c;
    cout << "Enter Celsius: ";
    cin >> c;

    cout << "Fahrenheit = " << fahrenheit(c);

    return 0;
}
