#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums1 = {4, 9, 5, 9, 8, 4};
    vector<int> nums2 = {9, 4, 9, 8, 4, 6};

    vector<int> ans;

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0;
    int j = 0;

    while(i < nums1.size() && j < nums2.size())
    {
        if(nums1[i] == nums2[j])
        {
            if(ans.empty() || ans.back() != nums1[i])
            {
                ans.push_back(nums1[i]);
            }

            i++;
            j++;
        }
        else if(nums1[i] < nums2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << "Intersection: ";

    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
