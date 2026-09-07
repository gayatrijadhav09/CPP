#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char ch1, ch2;

    cout << "Enter first character: ";
    cin >> ch1;

    cout << "Enter second character: ";
    cin >> ch2;

    int difference = abs((int)ch1 - (int)ch2);

    cout << "Difference between ASCII values = " << difference << endl;

    return 0;
}
