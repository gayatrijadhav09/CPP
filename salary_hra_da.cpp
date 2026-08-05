#include <iostream>
using namespace std;

float salary(float basic)
{
    float hra = basic * 0.20;
    float da = basic * 0.10;

    return basic + hra + da;
}

int main()
{
    float basic;
    cin >> basic;

    cout << "Total Salary = " << salary(basic);

    return 0;
}
