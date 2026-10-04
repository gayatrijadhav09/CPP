#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
       vector<pair<int,int>>vec={{9,3},{5,6},{7,3}};
        sort(vec.begin(),vec.end());
for(auto p:vec){

        cout<<p.first<<" "<<p.second<<endl ;
}
        return 0;
}


