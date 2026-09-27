#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    // 1. push_back
    d.push_back(10);
    d.push_back(20);

    // 2. push_front
    d.push_front(5);

    cout << "Deque: ";
    for(int x : d)
        cout << x << " ";

    // 3. pop_front
    d.pop_front();

    cout << "\nAfter pop_front: ";
    for(int x : d)
        cout << x << " ";

    // 4. pop_back
    d.pop_back();

    cout << "\nAfter pop_back: ";
    for(int x : d)
        cout << x << " ";

    // 5. front
    cout << "\nFront: " << d.front();

    // 6. back
    cout << "\nBack: " << d.back();

    // 7. size
    cout << "\nSize: " << d.size();

    return 0;
}
