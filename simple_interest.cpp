#include <iostream>
using namespace std;

float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t;

    cout << "Enter Principal: ";
    cin >> p;

    cout << "Enter Rate: ";
    cin >> r;

    cout << "Enter Time: ";
    cin >> t;

    cout << "Simple Interest = " << simpleInterest(p, r, t);

    return 0;
}
