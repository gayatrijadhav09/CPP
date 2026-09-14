#include<iostream>
#include<map>
using namespace std;
int main(){
        multimap<string,int>m;
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

