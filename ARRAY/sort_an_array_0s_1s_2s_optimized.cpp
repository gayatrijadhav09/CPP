#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0)
            count0++;
        else if(nums[i] == 1)
            count1++;
        else
            count2++;
    }

    int i = 0;

    for(int j = 0; j < count0; j++) {
        nums[i] = 0;
        i++;
    }

    for(int j = 0; j < count1; j++) {
        nums[i] = 1;
        i++;
    }

    for(int j = 0; j < count2; j++) {
        nums[i] = 2;
        i++;
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
