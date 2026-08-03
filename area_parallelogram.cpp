#include <iostream>
using namespace std;

float area(float base, float height)
{
    return base * height;
}

int main()
{
    float b, h;
    cin >> b >> h;

    cout << "Area = " << area(b, h);

    return 0;
}
