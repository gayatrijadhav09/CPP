#include <iostream>
using namespace std;

float celsius(float f)
{
    return (f - 32) * 5 / 9;
}

int main()
{
    float f;
    cout << "Enter Fahrenheit: ";
    cin >> f;

    cout << "Celsius = " << celsius(f);

    return 0;
}
