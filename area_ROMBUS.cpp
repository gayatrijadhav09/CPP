#include <iostream>
using namespace std;

float area(float d1, float d2)
{
    return (d1 * d2) / 2;
}

int main()
{
    float d1, d2;
    cin >> d1 >> d2;

    cout << "Area = " << area(d1, d2);

    return 0;
}
