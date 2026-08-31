#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int maxsubarray(vector<int> &nums) {
    int cursum = 0;
    int maxsum = INT_MIN;

    for (int val : nums) {
        cursum += val;
        maxsum = max(cursum, maxsum);

        if (cursum < 0) {
            cursum = 0;
        }
    }

    return maxsum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "Maximum subarray sum = " << maxsubarray(nums) << endl;

    return 0;
}
