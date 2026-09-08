#include <iostream>
using namespace std;

void circle(float r)
{
    float area = 3.14159 * r * r;
    float circumference = 2 * 3.14159 * r;

    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;
}

int main()
{
    float r;

    cout << "Enter radius: ";
    cin >> r;

    circle(r);

    return 0;
}
