#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int>vec={1,2,3,4,5,6};
        for(int val :vec){
                cout<<val<< "";
        }
	cout<<"is empty:"<<vec.empty()<<endl;
        cout<<endl;
                return 0;
}
