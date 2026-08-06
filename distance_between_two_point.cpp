#include <iostream>
#include <cmath>
using namespace std;

float distance(float x1, float y1, float x2, float y2)
{
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

int main()
{
    float x1, y1, x2, y2;

    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;

    cout << "Distance = " << distance(x1,y1,x2,y2);

    return 0;
}
//Distance=sqrt(x2−x1)2+(y2−y1)2

