#include <iostream>
using namespace std;

float volume(float r, float h)
{
    return 3.14159 * r * r * h;
}

int main()
{
    float r, h;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Enter height: ";
    cin >> h;

    cout << "Volume of Cylinder = " << volume(r, h);

    return 0;
}
