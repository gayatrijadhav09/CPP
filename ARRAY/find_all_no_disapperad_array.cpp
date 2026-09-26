#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};

    sort(nums.begin(), nums.end());

    vector<int> ans;
    int n = nums.size();
    int num = 1;

    for(int i = 0; i < n; i++) {

        while(num < nums[i]) {
            ans.push_back(num);
            num++;
        }

        if(num == nums[i]) {
            num++;
        }
    }

    while(num <= n) {
        ans.push_back(num);
        num++;
    }

    cout << "Missing numbers: ";

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
