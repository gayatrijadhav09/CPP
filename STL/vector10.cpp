#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int>vec={1,2,3,4,5,6};
        vec.erase(vec.begin()+2);
	cout<<"size:"<<vec.size();
		cout<<"capacity:"<<vec.capacity()<<endl;
	for(int val :vec){
                cout<<val<< " ";
        }
        cout<<endl;
                return 0;
        }

