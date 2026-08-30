#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {

    // ===== VECTOR PART =====
    cout << "Using Vector:" << endl;

    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Original Vector: ";
    for(int x : v)
        cout << x << " ";

    // Remove First
    v.erase(v.begin());

    // Remove Last
    v.pop_back();

    cout << "\nAfter Removing First and Last: ";
    for(int x : v)
        cout << x << " ";


    // ===== DEQUE PART =====
    cout << "\n\nUsing Deque:" << endl;

    deque<int> d = {100, 200, 300, 400, 500};

    cout << "Original Deque: ";
    for(int x : d)
        cout << x << " ";

    // Remove First
    d.pop_front();

    // Remove Last
    d.pop_back();

    cout << "\nAfter Removing First and Last: ";
    for(int x : d)
        cout << x << " ";

    return 0;
}