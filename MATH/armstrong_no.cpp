#include<iostream>
using namespace std;
bool armstrong(int n){
	int copy=n;
	int sumofcube=0;
	while(n!=0){
		int digit=n%10;
		sumofcube+=(digit*digit*digit);
		n=n/10;
	}
	return sumofcube==copy;
}
int main(){
	int n=153;
	if(armstrong(n)){
		cout<<"is armstrong\n";
	}
	else{
		cout<<"not armstrong\n";
	}
	return 0;
}
