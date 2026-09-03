
#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {

    int n = nums.size();
    vector<int> ans(n, 1);

    // Prefix
    int pre = 1;

    for(int i = 0; i < n; i++) {
        ans[i] = pre;
        pre = pre * nums[i];
    }

    // Suffix
    int suf = 1;

    for(int i = n - 1; i >= 0; i--) {
        ans[i] = ans[i] * suf;
        suf = suf * nums[i];
    }

    return ans;
}

int main() {

    vector<int> nums = {1, 2, 3, 4};

    vector<int> ans = productExceptSelf(nums);

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}

