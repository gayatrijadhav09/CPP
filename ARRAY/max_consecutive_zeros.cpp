#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 0, 0, 0, 1, 1};

    int count = 0;
    int maxCount = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == 0)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        maxCount = max(maxCount, count);
    }

    cout << maxCount;

    return 0;
}
