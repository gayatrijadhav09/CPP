#include <iostream>
using namespace std;

int bad = 4;

bool isBadVersion(int version)
{
    return version >= bad;
}

int main()
{
    int n = 6;

    int left = 1;
    int right = n;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        cout << "Checking version: " << mid << endl;

        if (isBadVersion(mid))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << "First Bad Version = " << left << endl;

    return 0;
}
