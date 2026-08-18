#include <iostream>
using namespace std;

void change(int x)
{
    cout << "Before change: " << x << endl;

    x = 50;

    cout << "After change: " << x << endl;
}

int main()
{
    int a = 10;

    cout << "Before function: " << a << endl;

    change(a);

    cout << "After function: " << a << endl;

    return 0;
}
