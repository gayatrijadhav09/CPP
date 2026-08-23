#include<iostream>
using namespace std;
int main(){
	int num []={19,20,38,84,5,6};
	int size=6;
	int small=num[0];
	int smallindex=0;
	for(int i=0;i<size;i++){
		if(num[i]<small){
			small=num[i];
			smallindex=i;
		}
	}
	cout<<smallindex<<endl;
	return 0;
}

