
#include <iostream>
using namespace std;

int main() {
    int a = 17, b = 13, m = 5;

    // Addition
    cout << "Addition: " << ((a % m) + (b % m)) % m << endl;

    // Subtraction
    cout << "Subtraction: " << ((a % m) - (b % m) + m) % m << endl;

    // Multiplication
    cout << "Multiplication: " << ((a % m) * (b % m)) % m << endl;

    return 0;
}

