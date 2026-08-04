#include <iostream>
using namespace std;

float area(float r, float angle)
{
    return (angle / 360) * 3.14159 * r * r;
}

int main()
{
    float r, angle;
    cin >> r >> angle;

    cout << "Area = " << area(r, angle);

    return 0;
}
