#include<iostream>
#include<map>
using namespace std;
int main(){
        map<string,int>m;
        m.emplace("A",1);
                m.emplace("B",1);
        m.emplace("C",1);


        m.emplace("D",1);


for(auto p: m){
                cout<<p.first<<" " <<p.second<<endl;
        }
cout<<"count:"<<m.count("A")<<endl;
return 0;
}

