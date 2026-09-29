#include <iostream>
#include <vector>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();

    vector<int> count(n + 1, 0);

    for(int x : nums) {
        count[x]++;
    }

    int duplicate = 0;
    int missing = 0;

    for(int i = 1; i <= n; i++) {
        if(count[i] == 2) {
            duplicate = i;
        }

        if(count[i] == 0) {
            missing = i;
        }
    }

    return {duplicate, missing};
}

int main() {
    vector<int> nums = {1, 3, 3, 4, 5};

    vector<int> ans = findErrorNums(nums);

    cout << "Duplicate = " << ans[0] << endl;
    cout << "Missing = " << ans[1] << endl;

    return 0;
}
