#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        else if (nums[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return left;
}

int main() {
    vector<int> nums = {2, 4, 6, 8, 10};
    int target = 7;

    cout << searchInsert(nums, target) << endl;

    return 0;
}
