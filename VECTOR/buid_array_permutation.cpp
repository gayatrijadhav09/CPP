#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    vector<int> ans;

    for(int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[nums[i]]);
    }

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
