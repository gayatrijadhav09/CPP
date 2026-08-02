#include <iostream>
using namespace std;

float percentage(float a, float b, float c, float d, float e)
{
    return (a + b + c + d + e) / 5;
}

int main()
{
    float a, b, c, d, e;

    cout << "Enter marks of 5 subjects: ";
    cin >> a >> b >> c >> d >> e;

    cout << "Percentage = " << percentage(a, b, c, d, e);

    return 0;
}
