#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18) {
        cout << "You are eligible for a driving license.";
    }
    else {
        cout << "You are not eligible for a driving license.";
    }

    return 0;
}
