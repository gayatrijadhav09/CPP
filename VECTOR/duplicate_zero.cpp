#include <iostream>
#include <vector>
using namespace std;

void duplicateZeros(vector<int>& arr)
{
    int n = arr.size();

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] == 0)
        {
            for(int j = n - 1; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }

            arr[i + 1] = 0;
            i++;
        }
    }
}

int main()
{
    vector<int> arr = {1, 0, 2, 3, 0, 4};

    duplicateZeros(arr);

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
