#include <iostream>
using namespace std;

void squares(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << i * i << " ";
    }
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    squares(n);

    return 0;
}
