#include<iostream>
using namespace std;
int max(int a,int b){
	if(a<b){
		return b;
	}
	else {
		return a;
	}
}

int main(){
	cout<<"max:"<<max(6,3)<<endl;
return 0;
}
