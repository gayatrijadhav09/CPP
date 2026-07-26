#include<iostream>
using namespace std;
int main(){
	int n=5;
	int oddsum=0;
	int i=1;
	while(i<=n){
	if(n%2!=0){
		oddsum+=i;
		}
	i++;
	}
	cout<<"oddsum="<<oddsum<<endl;

	return 0;
}            
