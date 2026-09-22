#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k;
    cin >> k;

    k = k % n;

    for(int i = 0; i < k; i++)
    {
        int last = nums[n - 1];

        for(int j = n - 1; j > 0; j--)
        {
            nums[j] = nums[j - 1];
        }

        nums[0] = last;
    }

    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
