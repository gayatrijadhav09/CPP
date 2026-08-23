#include<iostream>
using namespace std;
int main(){
	int num[]={5,2,9,-20,45};
	int size=5;
	int smallest=num[0];
	for(int i=0;i<size;i++){
		if(num[i]<smallest){
			smallest=num[i];
		}
	}
	cout<<smallest<<endl;
	return 0;
}
