#include <iostream>
using namespace std;

float volume(float r)
{
    return (4.0 / 3.0) * 3.14159 * r * r * r;
}

int main()
{
    float r;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Volume of Sphere = " << volume(r);

    return 0;
}
