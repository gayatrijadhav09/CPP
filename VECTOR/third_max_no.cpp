#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {2, 2, 3, 1};

    sort(nums.begin(), nums.end());

    int n = nums.size();
    int count = 1;

    for(int i = n - 2; i >= 0; i--)
    {
        if(nums[i] != nums[i + 1])
        {
            count++;

            if(count == 3)
            {
                cout << nums[i] << endl;
                return 0;
            }
        }
    }

    cout << nums[n - 1] << endl;

    return 0;
}
