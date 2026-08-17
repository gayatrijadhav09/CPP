#include<iostream>
using namespace std;
int sumno(int n){
	int sum=0;
	for(int i=0;i<=n;i++){
		sum+=i;
	}
	return sum;
	}

int main(){
 cout<<"sum:"<<sumno(10)<<endl;
return 0;
}

