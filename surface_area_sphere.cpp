#include <iostream>
using namespace std;

float surfaceArea(float r)
{
    return 4 * 3.14159 * r * r;
}

int main()
{
    float r;
    cin >> r;

    cout << "Surface Area = " << surfaceArea(r);

    return 0;
}
