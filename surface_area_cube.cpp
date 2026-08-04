#include <iostream>
using namespace std;

float surfaceArea(float side)
{
    return 6 * side * side;
}

int main()
{
    float s;
    cin >> s;

    cout << "Surface Area = " << surfaceArea(s);

    return 0;
}
