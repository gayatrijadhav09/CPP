#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>num;
cout<<"size:"<<num.size()<<endl;;
num.push_back(1);
num.push_back(2);
num.push_back(3);
num.push_back(4);
cout<<"size:"<<num.size()<<endl;

for(int i :num){
        cout<<i<<endl;
}
return 0;
}

