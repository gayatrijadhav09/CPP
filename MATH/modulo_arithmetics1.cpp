
#include <iostream>
using namespace std;

int main() {
    long long a, b, m;
    cin >> a >> b >> m;

    cout << "Addition: " << ((a % m) + (b % m)) % m << endl;

    cout << "Subtraction: " << ((a % m) - (b % m) + m) % m << endl;

    cout << "Multiplication: " << ((a % m) * (b % m)) % m << endl;

    return 0;
}
