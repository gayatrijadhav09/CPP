#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
        unordered_map<string,int>m;
        m.emplace("A",1);
                m.emplace("A",1);
        m.emplace("A",1);


        m.emplace("A",1);


for(auto p: m){
                cout<<p.first<<" " <<p.second<<endl;
        }
cout<<"count:"<<m.count("A")<<endl;
return 0;
}

