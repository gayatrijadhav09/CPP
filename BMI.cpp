#include <iostream>
using namespace std;

float bmi(float weight, float height)
{
    return weight / (height * height);
}

int main()
{
    float weight, height;

    cout << "Enter weight in kg: ";
    cin >> weight;

    cout << "Enter height in meter: ";
    cin >> height;

    cout << "BMI = " << bmi(weight, height);

    return 0;
}
