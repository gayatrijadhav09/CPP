#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int start = 0;
    int end = s.length() - 1;

    while(start < end) {

        while(start < end && !isalnum(s[start]))
            start++;

        while(start < end && !isalnum(s[end]))
            end--;

        if(tolower(s[start]) != tolower(s[end])) {
            cout << "Not Palindrome";
            return 0;
        }

        start++;
        end--;
    }

    cout << "Palindrome";

    return 0;
}
