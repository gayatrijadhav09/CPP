#include<iostream>
using namespace std;
int binary_to_decimal(int binaryno ){
	int ans=0;
	int pow=1;
	while(binaryno>0){
		int rem=binaryno%10;
		binaryno/=10;
		ans=ans+(rem*pow);
		pow=pow*2;
	}
	return ans;
}
int main(){
	int binaryno=101010;
	cout<< binary_to_decimal(binaryno )<< endl;
	return 0;
}
