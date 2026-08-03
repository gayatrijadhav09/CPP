#include <iostream>
using namespace std;

float area(float a, float b, float h)
{
    return 0.5 * (a + b) * h;
}

int main()
{
    float a, b, h;

    cout << "Enter two parallel sides: ";
    cin >> a >> b;

    cout << "Enter height: ";
    cin >> h;

    cout << "Area = " << area(a, b, h);

    return 0;
}
