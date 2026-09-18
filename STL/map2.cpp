#include<iostream>
#include<map>
using namespace std;
int main(){
        map<string,int>m;
        m["V"]=500;
        m["B"]=200;
m["A"]=300;
m.emplace("C",345);
for(auto p: m){
                cout<<p.first<<" " <<p.second<<endl;
        }
        return 0;
}


