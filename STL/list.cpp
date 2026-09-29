#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    // Add elements
    l.push_back(10);
    l.push_back(20);
    l.push_front(5);

    cout << "List: ";
    for(int x : l)
        cout << x << " ";

    // Remove from front
    l.pop_front();

    cout << "\nAfter pop_front: ";
    for(int x : l)
        cout << x << " ";

    // Remove from back
    l.pop_back();

    cout << "\nAfter pop_back: ";
    for(int x : l)
        cout << x << " ";

    return 0;
}
