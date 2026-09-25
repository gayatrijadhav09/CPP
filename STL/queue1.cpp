#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q1;
    queue<int> q2;

    q1.push(10);
    q1.push(20);

    q2.push(30);
    q2.push(40);

    swap(q1, q2);

    cout << "q1 front: " << q1.front() << endl;
    cout << "q2 front: " << q2.front() << endl;

    return 0;
}
