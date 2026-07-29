/* A 
   BA
   CBA
   DCBA  */

#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 25; i++) {
        for(char ch = 'A' + i; ch >= 'A'; ch--) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
