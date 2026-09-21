#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};

    int i = 0;

    for(int j = 0; j < nums.size(); j++)
    {
        if(nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }

    for(int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
