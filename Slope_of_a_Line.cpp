#include <iostream>
using namespace std;

float slope(float x1, float y1, float x2, float y2)
{
    return (y2-y1) / (x2-x1);
}

int main()
{
    float x1, y1, x2, y2;

    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;

    cout << "Slope = " << slope(x1, y1, x2, y2);

    return 0;
}
