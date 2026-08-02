#include <iostream>
using namespace std;

float distance(float speed, float time)
{
    return speed * time;
}

int main()
{
    float speed, time;

    cout << "Enter speed: ";
    cin >> speed;

    cout << "Enter time: ";
    cin >> time;

    cout << "Distance = " << distance(speed, time);

    return 0;
}
