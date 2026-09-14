#include<iostream>
#include<map>
using namespace std;
int main(){
        multimap<string,int>m;
	m.emplace("A",1);
	        m.emplace("B",2);
        m.emplace("C",3);


        m.emplace("D",4);


for(auto p: m){
                cout<<p.first<<" " <<p.second<<endl;
        }
cout<<"count:"<<m.count("A")<<endl;
return 0;
}
