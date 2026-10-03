#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
        unordered_set<int>s;
       s.insert(1);
       s.insert(2);
       s.insert(3);
       s.insert(4);
       s.insert(5);
       s.insert(6);
       s.insert(4);
       s.insert(5);
       s.insert(6);

//cout<<"lower_bound="<<*(s.lower_bound(4))<<endl;
//cout<<"upper_bound="<<*(s.upper_bound(4))<<endl;

for(auto p: s){
                cout<<p<<endl;
        }
cout<<endl;
return 0;
}
