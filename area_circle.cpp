#include <iostream>
using namespace std;

float area(float r)
{
    return 3.14159 * r * r;
}

int main()
{
    float r;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Area = " << area(r);

    return 0;
}
