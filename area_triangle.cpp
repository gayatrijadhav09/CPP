#include <iostream>
using namespace std;

float triangleArea(float b, float h)
{
    return 0.5 * b * h;
}

int main()
{
    float b, h;

    cout << "Enter base: ";
    cin >> b;

    cout << "Enter height: ";
    cin >> h;

    cout << "Area of Triangle = " << triangleArea(b, h);

    return 0;
}
