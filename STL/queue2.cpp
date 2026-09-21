#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;

    q.pop();

    cout << "After pop: " << q.front() << endl;
    cout << "Size after pop: " << q.size() << endl;

    if(q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    queue<int> q2;

    q2.push(100);
    q2.push(200);

    swap(q, q2);

    cout << "After swap:" << endl;
    cout << "q front: " << q.front() << endl;
    cout << "q2 front: " << q2.front() << endl;

    return 0;
}
