#include<iostream>
using namespace std;
int sumofdigit(int num){
	int digsum=0;
	while(num>0){
	int lastdigit=num%10;
		num=num/10;
		digsum+=lastdigit;
	}
	return digsum;
}

int main(){
	cout<<sumofdigit(12345)<<endl;
return 0;
}
