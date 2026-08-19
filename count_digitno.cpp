#include<iostream>
using namespace std;
int count_digit(int num){
	int count=0;
	while(num>0){
		num/=10;
		count++;
	}
	return count;
}

int main(){
	cout<<count_digit(1234)<<endl;
	return 0;
}
