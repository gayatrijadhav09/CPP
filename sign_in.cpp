#include <iostream>
using namespace std;

int main() {
    string username, password;
    int choice;

    cout << "1. Sign In" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter username: ";
            cin >> username;

            cout << "Enter password: ";
            cin >> password;

            if(username == "gayatri" && password == "1234")
                cout << "Sign In Successful!";
            else
                cout << "Invalid username or password.";

            break;

        case 2:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid choice.";
    }

    return 0;
}
