#include <iostream>
using namespace std;

float volume(float side)
{
    return side * side * side;
}

int main()
{
    float side;

    cout << "Enter side: ";
    cin >> side;

    cout << "Volume of Cube = " << volume(side);

    return 0;
}
