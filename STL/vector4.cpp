#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int>vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        for(int val: vec){
                cout<<val<<" ";
        }
        cout<<endl;
cout<< "value at index 2:"<<vec[2]<< "or"<<vec.at(2)<<endl;
 	return 0;
}
