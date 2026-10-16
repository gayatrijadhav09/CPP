
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int rem = target - arr[i];

        if (mp.find(rem) != mp.end()) {
            cout << mp[rem] << " " << i;
            return 0;
        }

        mp[arr[i]] = i;
    }

    cout << "No pair found";

    return 0;
}

