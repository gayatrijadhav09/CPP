#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {1,2,1,3,4};

    sort(arr, arr + n);

    for(int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1])
        {
            cout << "Duplicate";
            return 0;
        }
    }

    cout << "No Duplicate";

    return 0;
}
