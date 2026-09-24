#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {3, 1, 2, 4};

    int n = nums.size();
    int i = 0;
    int j = n - 1;

    while(i < j)
    {
        if(nums[i] % 2 != 0 && nums[j] % 2 == 0)
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        else if(nums[i] % 2 == 0)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
