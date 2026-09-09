#include <iostream>
using namespace std;

int main() {
    float radius, height, volume;
    const float PI = 3.14159;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Enter height: ";
    cin >> height;

    volume = PI * radius * radius * height;

    cout << "Volume of cylinder = " << volume << endl;

    return 0;
}
