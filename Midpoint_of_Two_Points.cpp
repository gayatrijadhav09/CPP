#include <iostream>
using namespace std;

void midpoint(float x1, float y1, float x2, float y2)
{
    float x = (x1 + x2) / 2;
    float y = (y1 + y2) / 2;

    cout << "Midpoint = (" << x << ", " << y << ")";
}

int main()
{
    float x1, y1, x2, y2;

    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;

    midpoint(x1, y1, x2, y2);

    return 0;
}
