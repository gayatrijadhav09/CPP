#include<iostream>
using namespace std;
int main(){
	int n=10;
	int count=1;
	int sum=0;
	while(count<=n){
		sum+=count;
     count++;
	}
	
	cout<<"sum="<<sum<<endl;
	return 0;
}
