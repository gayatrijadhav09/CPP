#include<iostream>
#include<vector>
#include<cmath>
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

    vector<int> ans(n);

    int left = 0;
    int right = n - 1;

    for(int i = n - 1; i >= 0; i--)
    {
        if(abs(nums[left]) > abs(nums[right]))
        {
            ans[i] = nums[left] * nums[left];
            left++;
        }
        else
        {
            ans[i] = nums[right] * nums[right];
            right--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
