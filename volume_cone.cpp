#include <iostream>
using namespace std;

float volume(float r, float h)
{
    return (3.14159 * r * r * h) / 3;
}

int main()
{
    float r, h;
    cin >> r >> h;

    cout << "Volume = " << volume(r, h);

    return 0;
}
