#include<iostream>
using namespace std;
 int dectobinary(int decno){
	 int ans=0;
	 int pow=1;
	 while(decno>0){
		int rem =decno%2;
		 decno=decno/2;
		 ans+=(rem*pow);
		 pow=pow*10;
	 }
	 return ans;
 }
int main(){
	int decno=42;
	cout<<dectobinary(decno)<<endl;
	return 0;
}

