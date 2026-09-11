#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> candies = {4, 2, 1, 3};
    int extraCandies = 2;

    int maxi = 0;

    for(int i = 0; i < candies.size(); i++)
    {
        maxi = max(maxi, candies[i]);
    }

    vector<bool> ans;

    for(int i = 0; i < candies.size(); i++)
    {
        if(candies[i] + extraCandies >= maxi)
            ans.push_back(true);
        else
            ans.push_back(false);
    }

    for(bool x : ans)
    {
        cout << boolalpha << x << " ";
    }

    return 0;
}
