#include<iostream>
using namespace std;
int main(){
	int value[]={1,2,2,2,2,3,3,3,3,4,4,4,5,6,8};
	int n=15;
	for(int i=0;i<n;i++){
		int count=0;
	for(int j=0;j<n;j++){
	    if(value[i]==value[j]){
		    count++;
	    }
	}
	if(count == 1){
	cout<<value[i]<<"  ";
	}
	}
	return 0;
}
			
