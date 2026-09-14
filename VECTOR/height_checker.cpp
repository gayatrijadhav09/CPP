#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> heights = {1, 1, 4, 2, 1, 3};

    vector<int> sorted = heights;

    sort(sorted.begin(), sorted.end());

    int count = 0;

    for(int i = 0; i < heights.size(); i++)
    {
        if(heights[i] != sorted[i])
            count++;
    }

    cout << "Students in wrong position: " << count << endl;

    return 0;
}
