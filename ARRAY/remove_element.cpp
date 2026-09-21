#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int nums[n];

    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int val;
    cin >> val;

    int i = 0;

    for(int j = 0; j < n; j++)
    {
        if(nums[j] != val)
        {
            nums[i] = nums[j];
            i++;
        }
    }

    cout << i << endl;

    for(int j = 0; j < i; j++)
    {
        cout << nums[j] << " ";
    }

    return 0;
}
