#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
       vector<int>vec={4,3,5,6,7};
        sort(vec.begin(),vec.end());
for(int val:vec){

        cout<<val<<" " ;
}
        return 0;
}

