#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int>vec={1,2,3,4,5,6};
vec.clear();
        for(int val :vec){
                cout<<val<< "";
        }
 
	cout<<endl;
cout<<"size:"<<vec.size()<<endl;
cout<<"capacity"<<vec.capacity()<<endl;
	return 0;
}
