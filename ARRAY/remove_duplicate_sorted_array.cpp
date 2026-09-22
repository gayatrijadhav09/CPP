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

    int i = 1;

    for(int j = 1; j < n; j++)
    {
        if(nums[j] != nums[j - 1])
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
