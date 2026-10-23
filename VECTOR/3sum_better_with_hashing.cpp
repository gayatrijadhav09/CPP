#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    set<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        int tar = -nums[i];
        set<int> s;

        for (int j = i + 1; j < n; j++) {
            int third = tar - nums[j];

            if (s.find(third) != s.end()) {
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                ans.insert(trip);
            }

            s.insert(nums[j]);
        }
    }

    for (auto trip : ans) {
        for (int x : trip) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
