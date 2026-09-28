#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {30, 10, 20, 10, 40};

    cout << "Original list: ";
    for(int x : l)
        cout << x << " ";

    l.push_front(5);
    l.push_back(50);

    cout << "\nAfter push: ";
    for(int x : l)
        cout << x << " ";

    l.pop_front();
    l.pop_back();

    cout << "\nAfter pop: ";
    for(int x : l)
        cout << x << " ";

    cout << "\nFront: " << l.front();
    cout << "\nBack: " << l.back();
    cout << "\nSize: " << l.size();

    l.remove(10);

    cout << "\nAfter remove(10): ";
    for(int x : l)
        cout << x << " ";

    l.sort();

    cout << "\nAfter sort: ";
    for(int x : l)
        cout << x << " ";

    l.reverse();

    cout << "\nAfter reverse: ";
    for(int x : l)
        cout << x << " ";

    l.push_back(20);
    l.push_back(20);

    l.unique();

    cout << "\nAfter unique: ";
    for(int x : l)
        cout << x << " ";

    l.clear();

    cout << "\nAfter clear, size: " << l.size();

    return 0;
}
