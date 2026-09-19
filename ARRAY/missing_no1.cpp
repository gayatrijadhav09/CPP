#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums = {0, 1, 2};

    sort(nums.begin(), nums.end());

    int n = nums.size();

    for(int i = 0; i < n; i++)
    {
        if(nums[i] != i)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;

    return 0;
}
