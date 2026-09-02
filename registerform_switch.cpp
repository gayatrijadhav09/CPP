#include <iostream>
using namespace std;

int main() {
    int choice;
    string name;
    int age;

    cout << "1. Register\n";
    cout << "2. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter name: ";
            cin >> name;

            cout << "Enter age: ";
            cin >> age;

            cout << "\nRegistration Successful!";
            cout << "\nName: " << name;
            cout << "\nAge: " << age;
            break;

        case 2:
            cout << "Thank you!";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
